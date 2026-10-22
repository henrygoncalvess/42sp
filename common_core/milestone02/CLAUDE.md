# Milestone 02 — Python (42 São Paulo)

Projetos Python do common core da 42. O Henry precisa **defender cada exercício** numa avaliação
entre pares: explicar o código, o *porquê* de cada conceito e, às vezes, alterar ou estender o
código ao vivo. Código que ele não entende reprova o projeto (ver "AI Instructions" nos PDFs).

## Mapa

| PDF (`pdfs/`)      | Diretório              | Tema                                      |
|--------------------|------------------------|-------------------------------------------|
| `en.subject_0.pdf` | `python_module_00/`    | Fundamentos (garden)                      |
| `en.subject_1.pdf` | `python_module_01/`    | Orientação a objetos                      |
| `en.subject_2.pdf` | `python_module_02/`    | Exceções                                  |
| `en.subject_3.pdf` | `python_module_03/`    | Coleções: list, tuple, set, dict, generators, comprehensions |
| `en.subject_4.pdf` | `python_module_04/`    | Arquivos, streams, `with`                 |
| `en.subject_5.pdf` | `python_module_05_bis/`| venv, dependências, `.env`, pacotes e imports |
| `en.subject_6.pdf` | `python_module_06_bis/`| ABC, polimorfismo, Protocol, design patterns |

Os PDFs **não são versionados** (são material da 42 e o repo tem remote no GitHub), então numa
worktree eles não existem: use sempre o caminho absoluto
`/home/henrygoncalvess/Documents/42sp/common_core/milestone02/pdfs/`.

Antes de codar, **leia o capítulo do exercício no PDF**. Para ler como texto:
`pdftotext -layout /home/henrygoncalvess/Documents/42sp/common_core/milestone02/pdfs/en.subject_N.pdf -`

Cada exercício tem uma linha `Directory`, `Files to Submit` e `Authorized`: siga as três à risca.

## Regras gerais (todos os PDFs)

- Python 3.10+ (a máquina tem 3.14).
- Código passa no `flake8`.
- Type hints em **todas** as funções e métodos; validar com `mypy . --strict`.
- Exceções tratadas sem crash nem stack trace (exceto quando o PDF pede o erro de propósito).
- Entregar **só** os arquivos pedidos, com nome e local exatos. `eval()`/`exec()` proibidos.
- A saída deve ser o mais fiel possível ao exemplo do PDF.

## Funções e imports autorizados

- **Chamadas de built-ins**: só as listadas em `Authorized` do exercício, nos módulos que
  restringem (00–04). Ex.: não usar `enumerate`, `range`, `sorted`, `len`... se não estiverem
  listados. Palavras-chave da linguagem (`for`, `in`, `while`, `try`, `with`, `yield`...) são
  livres, salvo restrição explícita.
- Na dúvida, fique com o que está listado e justifique a escolha no artefato.

Regras por módulo:

- **M03**: `str`, `int`, `float` (construtores e métodos) + `Authorized`. Cada tipo novo libera seus
  métodos a partir do exercício que o introduz: list (ex0), tuple (ex2), set (ex3), dict (ex4),
  generators (ex5), comprehensions (ex6). Ex.: no ex3 ainda não existe dict. Sem I/O de arquivo.
- **M04**: `str`, `int`, `float`, `list`, `dict`, `set`, `tuple` liberados. **`with` é proibido
  antes do ex3.** Mensagens podem ser personalizadas desde que a estrutura da saída se mantenha.
- **M05**: todos os built-ins liberados (exceto eval/exec). Imports definidos por exercício; no
  ex2–ex4 só módulos criados no projeto. **Proibido modificar `sys.path`.** Não versionar venv,
  `.env` nem `poetry.lock`. O ex2–ex4 vive na **raiz do módulo** (`alchemy/`, `elements.py`,
  `ft_*.py`); as funções são simples e retornam strings.
- **M06**: só `abc` e `typing`; todos os built-ins (exceto eval/exec). ex0–ex2 são arquivos na
  raiz do módulo; ex3 e ex4 são pacotes (`__init__.py` obrigatório) com scripts de teste na raiz.

## Estilo do Henry

Siga o código existente nos módulos:

- `def main() -> None:` + `if __name__ == "__main__":\n    main()`.
- f-strings; anotação de tipo nas variáveis locais (`scores: list[int] = []`).
- Sem docstrings e com poucos comentários.
- Código simples, explicável linha a linha. Nada de truques "espertos" ou one-liners obscuros
  (exceto as comprehensions exigidas no M03 ex6).

## Validação (dentro do diretório do módulo)

```sh
flake8
mypy . --strict            # no M05: mypy . --strict --exclude lab_env
python3 exN/<arquivo>.py   # com as entradas/argumentos do exemplo do PDF
python3 run_exercises.py   # roda mypy + flake8 + todos os ex*/*.py
```

- No M05/M06, rode também os scripts da **raiz** do módulo (o `run_exercises.py` não os cobre).
- Erros que o PDF pede de propósito (ex.: mypy no `ft_alembic_1.py`, ingest inválido no M06 ex0,
  ImportError circular no `ft_kaboom_1.py`) devem acontecer e ficar explicados no artefato.
- Arquivos de teste (ex.: `ancient_fragment.txt`) ficam **fora** do repo ou em `/tmp`.
- `./clean_python_noise` remove `__pycache__` antes da entrega.

## Modo professor

- Explicações em **PT-BR**; código, identificadores e saídas em inglês.
- Profundidade "de defesa": por que o conceito existe, como funciona por dentro (em nível
  conceitual: hash table, avaliação preguiçosa, file descriptor, sys.modules...), alternativas e
  trade-offs, armadilhas. Não é livro-texto.
- Sempre responder às perguntas que o próprio PDF faz (as caixinhas no fim de cada exercício).

## Fluxo "Exercício + Artefato"

Usado pelos agentes que trabalham numa worktree (ver `plans/module_0N.md`):

1. Ler o capítulo do PDF, o código já existente do módulo (para seguir o estilo) e este arquivo.
2. Implementar a solução. Apagar o `ex.py` placeholder da sua área, se existir.
3. Validar (seção acima).
4. Publicar **um artefato HTML em PT-BR por worktree**, com uma parte por exercício, cada uma com:
   1. **O que o PDF pede**: resumo + saída esperada.
   2. **O conceito**: por que existe, como funciona por dentro, comparação com o que veio antes.
   3. **A solução passo a passo**: trechos do código final com o porquê de cada decisão
      (incluindo o que é ou não autorizado).
   4. **Mini-exercícios práticos**: 4–6 por conceito, dificuldade crescente, rodáveis com
      `python3` num arquivo à parte; enunciado + saída esperada; resposta em `<details>`.
   5. **Perguntas prováveis da avaliação** com respostas: as do PDF + "e se o avaliador pedir
      para estender X?".
   6. **Armadilhas comuns**.
5. Mexer **só** nos caminhos indicados no prompt. Commit na branch da worktree (nunca na `main`):
   `feat(module_0N): <exs> <tema>`.
6. Terminar com: link do artefato, comandos de teste usados e um resumo de 3 linhas.
