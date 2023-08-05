# Conversão de Números para Binário (Inteiros e Decimais) 📦

## Descrição do Problema 📝

Este é um programa em C++ que realiza a conversão de números, sejam eles inteiros ou decimais, para sua representação binária. O programa recebe um número como entrada e produz a saída correspondente em forma de binário. Ele lida tanto com números inteiros quanto com números decimais, convertendo ambas as partes para binário.

## Entrada 📥

O arquivo de entrada contém um valor numérico, que pode ser um número inteiro ou decimal.

## Saída 📤

O programa imprimirá a representação binária do número fornecido como entrada. A saída consistirá em uma sequência de dígitos binários, com um ponto separando a parte inteira da parte fracionária (se existir).

## Exemplo de Entrada 🚀

```
9.625
```

## Exemplo de Saída 📤

```
Parte Inteira: 9
Parte Fracionária: 0.625
1001.101
```

## Explicação do Código 💡

O programa começa lendo um número da entrada padrão. Ele então verifica se a parte decimal do número é diferente de zero. Se for, chama a função `decimal_fracionario_para_binario` para lidar com a conversão do número decimal. Caso contrário, usa a função `decimal_para_binario` para converter a parte inteira do número em binário.

### Função `decimal_para_binario`

Essa função recebe um número inteiro como entrada e realiza a conversão da parte inteira para binário, seguindo um processo de divisões sucessivas por 2. Os restos das divisões são armazenados no vetor `binario`, que é invertido e impresso no final.

### Função `decimal_fracionario_para_binario`

Essa função recebe um número decimal como entrada e divide-o em parte inteira e parte fracionária. A parte inteira é convertida em binário usando a função `decimal_para_binario`. A parte fracionária é convertida em binário de maneira semelhante à parte inteira, com os dígitos sendo armazenados no vetor `binarioFrac`. O ponto entre as partes inteira e fracionária é calculado, e os dígitos binários são combinados para produzir a representação binária completa.

## Nível do Problema ⚙️

Intermediário - Nível 3
