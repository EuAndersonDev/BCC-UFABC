

# 🎓 Ciência da Computação — UFABC

Repositório dedicado ao registro de códigos, listas de exercícios, algoritmos e projetos desenvolvidos ao longo do curso de **Ciência da Computação (BCC)** e do ciclo básico do **Bacharelado em Ciência e Tecnologia (BC&T)** na Universidade Federal do ABC (UFABC).

---

## 🗂️ Estrutura do Repositório

A organização dos arquivos segue a divisão quadrimestral e o código oficial de cada disciplina:

```
.
├── bct/                     # Disciplinas do ciclo inicial (BC&T)
│   ├── processamento-dados/ # Algoritmos, listas e labs (Python / C)
│   ├── fun-estruturas-dados/# Estruturas lineares, árvores e ponteiros
│   └── matematica-discreta/ # Grafos, lógica proposicional e teoria dos conjuntos
│
├── bcc/                     # Disciplinas específicas de Ciência da Computação
│   ├── algoritmos-avancados/# Complexidade assintótica e algoritmos gulosos
│   ├── banco-de-dados/      # Modelagem relacional, álgebra relacional e SQL
│   ├── engenharia-software/ # Padrões de projeto, arquitetura e modelagem UML
│   ├── sistemas-operacionais/# Gerenciamento de memória, processos e threads
│   └── redes-computadores/  # Sockets, protocolos TCP/IP e simulações
│
└── docs/                    # Resumos teóricos, notas de aula e cheatsheets

```

---

## 🛠️ Tecnologias & Linguagens Utilizadas

* **Linguagens:** C, C++, Java, Python, Shell Script
* **Bancos de Dados:** PostgreSQL, SQLite, MySQL
* **Ferramentas de Desenvolvimento:** GCC/Clang, GDB, Valgrind, Make, Git, Docker
* **Ambiente:** Linux (Ubuntu / WSL2)

---

## 📋 Grade de Disciplinas & Status

| Código | Disciplina | Linguagem / Foco | Status |
| --- | --- | --- | --- |
| `BC0005` | Processamento da Informação (PI) | Python / Fundamentos de Lógica | Concluída |
| `MCTA003` | Programação Estruturada (PE) | C / Alocação dinâmica e ponteiros | Concluída |
| `MCTA004` | Paradigmas de Programação (PP) | Funcional / POO / Lógico | Em andamento |
| `MCTA018` | Banco de Dados | SQL / Modelagem Relacional | Em andamento |
| `MCTA002` | Algoritmos e Estruturas de Dados | Grafos, Ordenação, Árvores | Planejada |
| `MCTA022` | Sistemas Operacionais | Threads, IPC, POSIX (C) | Planejada |

---

## ⚙️ Como Compilar e Executar os Projetos

Cada diretório de disciplina contém seu próprio script de build ou arquivo fonte com documentação interna. Para compilar programas em C/C++:

```
# Navegar até o diretório do exercício/projeto
cd bct/processamento-dados/laboratorio-01

# Compilação padrão via GCC
gcc -Wall -Wextra -pedantic main.c -o programa

# Execução
./programa

```

---

## ⚖️ Política de Integridade Acadêmica

Todo o material disponibilizado neste repositório tem fins estritamente **educacionais e de consulta pessoal**. Se você é estudante da UFABC, utilize este código como referência de estudo, respeitando as diretrizes de integridade acadêmica da universidade e as regras de cada docente quanto ao envio de listas e projetos.


