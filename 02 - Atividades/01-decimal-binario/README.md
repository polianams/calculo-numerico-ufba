# Conversão de Decimal para Binário 📦

## Descrição do Problema 📝

Este é um programa em C++ que realiza a conversão de um número decimal para sua representação binária. O programa recebe um número inteiro como entrada e produz a saída correspondente em forma de binário.

## Entrada 📥

O arquivo de entrada contém um valor inteiro, que representa o número decimal a ser convertido para binário.

## Saída 📤

O programa imprimirá a representação binária do número fornecido como entrada. A saída consistirá em uma sequência de dígitos binários, sem espaços ou caracteres adicionais.

## Exemplo de Entrada 🚀

```
13
```

## Exemplo de Saída 📤

```
1101
```

## Explicação do Código 💡

O programa começa por receber um número inteiro da entrada padrão usando a função `cin` do C++. Ele então realiza a conversão desse número para sua representação binária. Aqui está como o processo funciona:

1. Se o número for igual a 0, a representação binária será apenas "0". Portanto, um dígito "0" é adicionado ao vetor `binario`.

2. Caso contrário, o programa entra em um loop onde realiza a divisão sucessiva do número por 2 e guarda os restos das divisões no vetor `binario`. Isso é feito até que o número se torne 1.

3. Após sair do loop, um dígito "1" é adicionado ao vetor `binario`.

4. O vetor `binario` é invertido usando a função `reverse` da biblioteca `algorithm`.

5. Por fim, o programa percorre o vetor `binario` e imprime cada dígito, produzindo assim a representação binária do número decimal.

## Nível do Problema ⚙️

Intermediário - Nível 1
