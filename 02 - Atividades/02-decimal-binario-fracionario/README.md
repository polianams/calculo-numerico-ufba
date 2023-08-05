# Conversão de Número Real para Binário 📦

## Descrição do Problema 📝
Este é um programa em C++ que realiza a conversão de um número real (decimal) para sua representação binária. O programa recebe um número real como entrada e produz a saída correspondente em forma de binário, considerando tanto a parte inteira quanto a parte fracionária do número.

## Entrada 📥
O arquivo de entrada contém um valor real, que representa o número a ser convertido para binário.

## Saída 📤
O programa imprimirá a representação binária do número fornecido como entrada. A saída consistirá em uma sequência de dígitos binários, separados por um ponto, indicando a separação entre a parte inteira e a parte fracionária.

## Exemplo de Entrada 🚀
```
9.625
```

## Exemplo de Saída 📤
```
1001.101
```

## Explicação do Código 💡
O programa começa por receber um número real da entrada padrão usando a função `cin` do C++. Ele então separa o número em duas partes: a parte inteira e a parte fracionária.

### Parte Inteira
Para converter a parte inteira em binário, o programa segue um processo semelhante ao anterior, onde realiza divisões sucessivas por 2 e guarda os restos das divisões no vetor `binario`. Depois, o vetor é invertido e impresso.

### Parte Fracionária
Para converter a parte fracionária em binário, o programa utiliza um processo um pouco diferente. Ele multiplica a parte fracionária por 2 repetidamente e guarda a parte inteira da multiplicação no vetor `binarioFrac`. A parte fracionária é atualizada subtraindo a parte inteira da multiplicação anterior. Esse processo é repetido até que a parte fracionária se torne 0.

### Impressão
O programa imprime a parte inteira e a parte fracionária do número binário, separadas por um ponto, para representar a parte decimal. Isso resulta na representação binária completa do número real fornecido.

## Nível do Problema ⚙️
Médio - Nível 2
