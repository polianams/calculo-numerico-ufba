# Método da Bisseção para Encontrar Raízes 📦

## Descrição do Problema 📝

Este é um programa em C++ que implementa o método da bisseção para encontrar raízes de uma função. O programa solicita valores de intervalo [a, b] e uma tolerância epsilon (eps) como entrada e, em seguida, itera para aproximar a raiz da função \( f(x) = 4x^3 - 5x - 1.5 \) dentro do intervalo dado.

## Entrada 📥

O arquivo de entrada contém três valores: `a`, `b` (os limites do intervalo) e `eps` (a tolerância de precisão para a raiz).

## Saída 📤

O programa imprimirá uma série de valores intermediários de `x` e a diferença entre `b` e `a` (|b - a|) para cada iteração. No final, quando o critério de convergência for atendido, o programa imprimirá o valor final de `x` que é uma aproximação da raiz da função.

## Exemplo de Entrada 🚀

```
0 1 0.001
```

## Exemplo de Saída 📤

```
Digite os valores a, b e epsilon:
0.5
x: 0.5
|b - a|: 1

x: 0.25
|b - a|: 0.5

x: 0.375
|b - a|: 0.25

x: 0.4375
|b - a|: 0.125

x: 0.40625
|b - a|: 0.0625

x: 0.421875
|b - a|: 0.03125

x: 0.414062
|b - a|: 0.015625

x: 0.417969
|b - a|: 0.0078125

x: 0.419922
|b - a|: 0.00390625

O valor final de x: 0.420898
```

## Explicação do Código 💡

O programa começa lendo os valores de `a`, `b` e `eps` da entrada padrão. Ele então entra em um loop while que itera até que a diferença entre `b` e `a` seja menor do que a tolerância `eps`. Dentro do loop, o programa calcula o ponto médio `x` do intervalo `[a, b]` e avalia a função nesse ponto.

- Se \( f(a) \cdot f(x) = 0 \), isso indica que um dos extremos é a raiz da função, então o programa imprime o valor de `x` e a diferença entre `b` e `a`, e em seguida sai do loop.

- Se \( f(a) \cdot f(x) < 0 \), isso significa que a raiz está no lado esquerdo do intervalo, e o valor de `b` é atualizado para `x`.

- Se \( f(a) \cdot f(x) > 0 \), isso significa que a raiz está no lado direito do intervalo, e o valor de `a` é atualizado para `x`.

O programa continua iterando até que a diferença entre `b` e `a` seja menor do que `eps`. Quando o critério de convergência é atendido, ele calcula a última aproximação da raiz e imprime o valor final de `x`.

## Nível do Problema ⚙️

Intermediário - Nível 4
