# Conversão de Binário para Decimal 📦

## Descrição do Problema 📝

Este é um programa em C++ que realiza a conversão de um número binário para sua representação decimal. O programa recebe uma sequência binária como entrada e produz a saída correspondente em forma de decimal, usando duas abordagens diferentes.

## Entrada 📥

O arquivo de entrada contém uma sequência de caracteres representando um número binário.

## Saída 📤

O programa imprimirá o valor decimal equivalente ao número binário fornecido, utilizando duas abordagens distintas.

## Exemplo de Entrada 🚀

```
101010
```

## Exemplo de Saída 📤

```
O valor em decimal é: 42
```

## Explicação do Código 💡

O programa começa por receber uma sequência binária da entrada padrão usando a função `cin` do C++. Em seguida, realiza a conversão dessa sequência binária em um valor decimal de duas maneiras diferentes.

### Primeira Maneira

O programa percorre a sequência binária da esquerda para a direita e, para cada dígito "1" encontrado, adiciona o valor correspondente à posição desse dígito na sequência binária à variável `decimal`. Isso é feito usando a função `pow` para calcular a potência de 2 apropriada. No final, o valor decimal é impresso.

### Segunda Maneira

O programa utiliza a função `std::stoi` (string to integer) da biblioteca `<string>` para converter diretamente a sequência binária em um valor decimal. O último argumento dessa função é definido como 2, indicando que a conversão deve ser feita considerando a base binária. O valor decimal resultante é impresso.

## Nível do Problema ⚙️

Intermediário - Nível 2
