#!/usr/bin/env bash

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

UUID="clipboard-indicator@tudmotu.com"
REPO_URL="https://github.com/Tudmotu/gnome-shell-extension-clipboard-indicator.git"
EXTENSIONS_DIR="$HOME/.local/share/gnome-shell/extensions"
TARGET_DIR="$EXTENSIONS_DIR/$UUID"
TARGET_VERSION="v47"

echo -e "${BLUE}=== [42 SP] Instalador Clipboard Indicator (GNOME 42) ===${NC}\n"

if ! command -v git &> /dev/null; then
    echo -e "${RED}[Erro] 'git' não encontrado no sistema. Entre em contato com a bocal.${NC}"
    exit 1
fi

if ! command -v gnome-extensions &> /dev/null; then
    echo -e "${RED}[Erro] 'gnome-extensions' não encontrado. Este script é exclusivo para GNOME.${NC}"
    exit 1
fi

mkdir -p "$EXTENSIONS_DIR"

if [ -d "$TARGET_DIR" ]; then
    echo -e "${YELLOW}[Info] O diretório da extensão já existe. Verificando a integridade...${NC}"
    cd "$TARGET_DIR" || exit 1

    if [ ! -d ".git" ]; then
        echo -e "${YELLOW}[Aviso] Instalação anterior corrompida. Limpando e refazendo...${NC}"
        cd .. && rm -rf "$TARGET_DIR"
        git clone "$REPO_URL" "$TARGET_DIR" --quiet
        cd "$TARGET_DIR" || exit 1
    fi

    git fetch --tags --quiet
    CURRENT_TAG=$(git describe --tags --abbrev=0 2>/dev/null || echo "master")

    if [ "$CURRENT_TAG" == "$TARGET_VERSION" ]; then
        echo -e "${GREEN}[OK] Repositório já está travado na versão correta ($TARGET_VERSION).${NC}"
    else
        echo -e "${YELLOW}[Ajustando] Regredindo da versão atual ($CURRENT_TAG) para a compatível ($TARGET_VERSION)...${NC}"
        git checkout "$TARGET_VERSION" --quiet
    fi
else
    echo -e "${BLUE}[Clonando] Baixando a extensão do GitHub...${NC}"
    if git clone "$REPO_URL" "$TARGET_DIR" --quiet; then
        cd "$TARGET_DIR" || exit 1
        git checkout "$TARGET_VERSION" --quiet
        echo -e "${GREEN}[OK] Download concluído (Tag: $TARGET_VERSION).${NC}"
    else
        echo -e "${RED}[Erro] Falha de conexão ao tentar clonar o repositório.${NC}"
        exit 1
    fi
fi

echo -e "\n${BLUE}[Ativando] Solicitando registro ao GNOME Shell...${NC}"
gnome-extensions enable "$UUID" 2>/dev/null

IS_ENABLED=$(gnome-extensions list --enabled | grep -c "$UUID")

echo -e "\n================================================================"
if [ "$IS_ENABLED" -eq 1 ]; then
    echo -e "${GREEN}✨ SUCESSO! A extensão foi ativada! ✨${NC}"
    echo -e "Olhe para a sua barra superior, lado direito."
else
    echo -e "${YELLOW}⚠️ QUASE LÁ! Os arquivos estão 100% corretos, mas o GNOME ainda não os enxergou.${NC}"
    
    SESSION_TYPE="${XDG_SESSION_TYPE:-unknown}"
    if [ "$SESSION_TYPE" == "wayland" ]; then
        echo -e "\nVocê está rodando ${BLUE}Wayland${NC}. O GNOME precisa reiniciar a interface:"
        echo -e "  1. Salve seus códigos abertos."
        echo -e "  2. Faça ${YELLOW}LOGOUT${NC} da sua conta e entre novamente."
        echo -e "  3. O ícone aparecerá sozinho (se não aparecer, rode este script mais uma vez)."
    else
        echo -e "\nAperte ${YELLOW}Alt + F2${NC}, digite a letra ${YELLOW}r${NC} e dê ${YELLOW}Enter${NC} para recarregar o Shell. Em seguida, execute o script novamente"
    fi
fi
echo -e "================================================================\n"