# Método de Iteração de Ponto Fixo 📦

## Descrição do Problema 📝

Este é um programa em C++ que implementa o método de iteração de ponto fixo para encontrar uma raiz aproximada de uma função \( f(x) = x^3 - x - 1 \). O programa solicita um intervalo [a, b] e uma tolerância epsilon (eps) como entrada e, em seguida, itera para aproximar uma raiz da função usando o método de iteração de ponto fixo.

## Entrada 📥

O arquivo de entrada contém três valores: `a`, `b` (que não são usados neste programa) e `eps` (a tolerância de precisão para a raiz).

## Saída 📤

O programa imprimirá uma série de valores intermediários de `x` à medida que iterar no método de iteração de ponto fixo, até que o critério de parada seja atendido. A raiz final aproximada da função também é impressa.

## Exemplo de Entrada 🚀

```
0 1 0.001
```

## Exemplo de Saída 📤

```
Converge
x: 0
x: 1
A raiz final é: 1
```

## Explicação do Código 💡

O programa começa lendo os valores de `a`, `b` e `eps` da entrada padrão, embora `a` e `b` não sejam usados neste programa. Em seguida, ele chama a função `verificaX0` para verificar se o valor \( x_0 = 1 \) é um valor de ponto fixo válido para a função \( \phi(x) = (x+1)^{1/3} \). A função `verificaX0` imprime "Converge" se a derivada de \( \phi(x) \) em \( x_0 \) for menor ou igual a 1, indicando que o método de iteração converge. Caso contrário, imprime "Não converge".

Em seguida, o programa inicia a iteração de ponto fixo. Ele inicializa `x_ant` como 0 e `x_prox` como 1, apenas para entrar no loop. O programa então imprime a primeira raiz aproximada.

Dentro do loop, o programa verifica o critério de parada usando a função `criterio_parada`. Se o critério de parada não for atendido, ele atualiza `x_ant` para `x_prox` e calcula o próximo valor de `x_prox` usando a função \( \phi(x) \). O valor de `x_prox` é então impresso.

O loop continua até que o critério de parada seja atendido. A raiz final aproximada é impressa no final do programa.

## Nível do Problema ⚙️

Intermediário - Nível 4
