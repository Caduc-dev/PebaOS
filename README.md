🖥️ PebaOS

Um sistema operacional educacional desenvolvido em C com o objetivo de aprender programação de sistemas, modularização, estruturas de controle, manipulação de arquivos e arquitetura de software.

O projeto não pretende substituir um sistema operacional real como Windows ou Linux. O foco é estudar os conceitos fundamentais por trás de um sistema operacional através da construção gradual de um ambiente interativo em terminal.

##🚀 Objetivos do Projeto
-Aprender linguagem C na prática
-Entender organização de projetos maiores
-Aplicar modularização com arquivos .c e .h
-Desenvolver lógica de programação
-Simular funcionalidades presentes em sistemas operacionais
-Construir um projeto de portfólio para GitHub
## 📚 Conceitos Estudados
-Variáveis
-Condicionais (if, switch)
-Laços de repetição (while)
-Funções
-Modularização
-Manipulação de strings
-Estruturas de projeto
-Compilação com GCC
-Controle de fluxo
-Organização de código

## 📂 Estrutura do Projeto
'''text
PebaOS/

├── src/
│   ├── main.c
│   ├── menu.c
│   ├── login.c
│   └── infoSistema.c
│
├── include/
│   ├── menu.h
│   ├── login.h
│   └── infoSistema.h
│
├── data/
│
├── docs/
│
└── README.md
'''
✅ Funcionalidades Implementadas
Sistema de Login
Usuário fixo
Senha fixa
Validação de credenciais
Controle de acesso ao sistema
Menu Principal
Navegação por opções
Controle de fluxo utilizando switch
Encerramento seguro do programa
Informações do Sistema
Nome do sistema
Versão
Fabricante
Exibição modularizada
🔐 Credenciais de Teste
Usuário: admin
Senha: password
⚙️ Como Compilar
Windows (GCC)
gcc src/main.c src/menu.c src/login.c src/infoSistema.c -I include -o PebaOS.exe
Executar
.\PebaOS.exe
