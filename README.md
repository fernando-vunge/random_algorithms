# algoritmos aleatórios / random algorithms
# tribonacci
- PT |A sequência tribonacci é uma generalização da sequência de Fibonacci onde cada termo é a soma dos três termos anteriores.

- EN |The tribonacci sequence is a generalization of the Fibonacci sequence where each term is the sum of the three preceding terms.

# sum of odd numbers
- PT |Dado o triângulo de números ímpares consecutivos:Calcule a soma dos números na enésima linha deste triângulo (começando no índice 1)

- EN |Given the triangle of consecutive odd numbers:Calculate the sum of the numbers in the nth row of this triangle (starting at index 1)

# printer erros
PT |Numa fábrica, uma impressora imprime etiquetas para caixas. Para um tipo de caixa a impressora tem que usar cores que, por uma questão de simplicidade, são nomeadas com letras de a a m.

As cores utilizadas pela impressora são registradas em uma sequência de controle. Por exemplo, uma string de controle "boa" seria aaabbbbhaijjjm, o que significa que a impressora usou três vezes a cor a, quatro vezes a cor b, uma vez a cor h e uma vez a cor a...

Às vezes há problemas: falta de cores, mau funcionamento técnico e uma sequência de controle "ruim" é produzida, por exemplo. aaaxbbbbyyhwawiwjjjwwm com letras que não vão de a a m.

Você tem que escrever uma função impressora_error que dada uma string retornará a taxa de erro da impressora como uma string representando um racional cujo numerador é o número de erros e o denominador o comprimento da string de controle. Não reduza esta fração a uma expressão mais simples.

A string tem comprimento maior ou igual a um e contém apenas letras de até z.

EN |In a factory a printer prints labels for boxes. For one kind of boxes the printer has to use colors which, for the sake of simplicity, are named with letters from a to m.

The colors used by the printer are recorded in a control string. For example a "good" control string would be aaabbbbhaijjjm meaning that the printer used three times color a, four times color b, one time color h then one time color a...

Sometimes there are problems: lack of colors, technical malfunction and a "bad" control string is produced e.g. aaaxbbbbyyhwawiwjjjwwm with letters not from a to m.

You have to write a function printer_error which given a string will return the error rate of the printer as a string representing a rational whose numerator is the number of errors and the denominator the length of the control string. Don't reduce this fraction to a simpler expression.

The string has a length greater or equal to one and contains only letters from ato z.
