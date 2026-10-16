# Aulas da Faculdade | Análise e Desenvolvimento de Sistemas

Repositório de exercícios e avaliações da graduação em **Análise e Desenvolvimento de Sistemas (ADS)**. Os materiais foram reunidos por semestre e disciplina, mantendo versões diferentes de trabalhos parecidos em pastas separadas.

> **Escopo:** este é um acervo acadêmico, não uma aplicação única. Os programas não foram todos testados após a migração; cada exercício pode exigir configuração própria.

## Navegação rápida

| Disciplina | Pasta | Conteúdo principal |
| --- | --- | --- |
| Lógica e programação — 1º semestre | [Exercícios em C++](Exercicios_primeiro_semestre/) | Condicionais, cálculos, conversões, juros, consumo e validações |
| Programação Orientada a Objetos — 2º semestre | [POO e Java](POO_Segundo_semestre/) | Exercícios do Jackson, classes Java e duas versões de campeonato de robôs |
| Desenvolvimento Web e IA — 2º semestre | [Desenvolvimento Web](Dev_web_ia_segundo_semestre/) | HTML, CSS, JavaScript, páginas de avaliação e Node.js/Express |
| Estrutura de Dados — 2º semestre | [Estrutura de Dados](Estrutura_de_dados_segundo_semestre/) | Atividades do Petri; lista, fila e pilha |

## Visão das pastas

```text
aulas-faculdade/
├── Exercicios_primeiro_semestre/
│   └── Exercicios_C_CPP/
├── POO_Segundo_semestre/
│   ├── Jackson_Semana2/
│   ├── Exercicios_Jackson/
│   ├── Exercicios_21_09/
│   ├── Avaliacao_Java/
│   └── Campeonato_de_Robos/
├── Dev_web_ia_segundo_semestre/
│   ├── Desenvolvimento_Web/
│   │   └── branches/
│   ├── Avaliacao_Frontend/
│   └── Estudos_Node_Express/
├── Estrutura_de_dados_segundo_semestre/
│   ├── Atividade_Petri_1/
│   └── Atividade_Petri_2/
└── docs/
    ├── MAPA_DE_ORIGEM.md
    └── CHECKLIST.md
```

## Executar os exercícios

**C++ (primeiro semestre)** — instale um compilador C++ (por exemplo, g++) e, dentro de `Exercicios_primeiro_semestre/Exercicios_C_CPP/`, execute um arquivo por vez:

```powershell
g++ "numero par ou impar (exercicio 3).cpp" -o programa.exe
.\programa.exe
```

**Java (POO e Estrutura de Dados)** — utilize um JDK. Os exercícios são independentes; confira o nome da classe pública e as declarações `package` antes de compilar. No campeonato de robôs, os arquivos declaram `package atividadeavaliativa`, então precisam ser compilados e executados respeitando o pacote.

**Frontend (HTML/CSS/JS)** — abra o HTML de cada atividade no navegador. Algumas páginas podem depender de caminhos relativos de CSS, JS e imagens; mantenha suas subpastas junto do HTML.

**Node.js/Express** — dentro de `Dev_web_ia_segundo_semestre/Estudos_Node_Express/`:

```powershell
npm install
npm run hello
npm run post:listar
```

Os scripts disponíveis estão no [package.json](Dev_web_ia_segundo_semestre/Estudos_Node_Express/package.json). Os exemplos de servidor podem ocupar portas locais; execute um de cada vez conforme a atividade.

## Sobre a migração

Este repositório reúne conteúdos de **10 repositórios de origem**, incluindo arquivos de branches de Desenvolvimento Web (`gh-pages`, `4-api` e `feat/nova-tela`). A branch `main` daquele projeto de origem estava vazia quando a migração foi feita. As duas versões de `Main.java`/`Robo.java` foram mantidas separadas.

- [Mapa completo dos repositórios e branches de origem](docs/MAPA_DE_ORIGEM.md)
- [Checklist de validação pós-migração](docs/CHECKLIST.md)

A importação preservou os arquivos, mas **não unificou o histórico de commits** dos repositórios antigos. Os históricos originais continuam nos próprios repositórios e podem ter sido salvos em backups locais pelo script de migração.

## Limitações conhecidas

- Nem todos os exercícios foram compilados ou executados depois da consolidação.
- O diretório `Jackson_Semana2` contém apenas documentação na versão de origem consultada.
- Alguns exercícios são versões de aula ou avaliação, não produtos finalizados.
- Os projetos Node.js exigem dependências próprias; os exercícios Java e C++ exigem compiladores adequados.

## Autoria

**Kaue Borges** — estudos e atividades da graduação em Análise e Desenvolvimento de Sistemas.

Este repositório é destinado a fins de estudo e portfólio acadêmico. Antes de reutilizar materiais de terceiros, verifique as permissões correspondentes.
