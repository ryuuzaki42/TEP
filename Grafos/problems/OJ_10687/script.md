## Frame
+ \bbcover{OJ 10687}{Monitoring the Amazon}{Prof. Edson Alves}{Faculdade UnB Gama}

## Text
+ \bbenglish{A network of autonomous, battery-powered, data acquisition stations has been installed to monitor the climate in the region of Amazon. An order-dispatch station can initiate transmission of instructions to the control stations so that they change their current parameters. To avoid overloading the battery, each station (including the order-dispatch station) can only transmit to two other stations. The destinataries of a station are the two closest stations. In case of draw, the first criterion is to chose the westernmost (leftmost on the map), and the second criterion is to chose the southernmost (lowest on the map).}
+
+ \vspace{0.1in}
+ 
+ \bbenglish{You are commissioned by Amazon State Government to write a program that decides if, given the localization of each station, messages can reach all stations.}

## Text
+ \bbtext{Uma rede de estações de aquisição de dados autônomas, alimentadas por baterias, foram instaladas para monitorar o clima na região da Amazônia. Uma estação de controle pode iniciar a transição de instruções para as demais estações para que elas alterem seus parâmetros atuais. Para evitar a sobrecarga da bateria, cada estação (incluindo a estação de controle) pode transmitir informações para apenas duas outras estações. Os destinatários de uma estação são as duas estações mais próximas. Em caso de empate, o primeiro critério é escolher a estação mais à oeste (esquerda no mapa), e o segundo critério é escolher a estação mais ao sul (parte inferior do mapa).}
+
+ \vspace{0.1in}
+ 
+ \bbtext{Você foi contratado pelo Governo do Estado do Amazonas para escrever um programa que decide se, dadas as localizações de cada estação, mensagens podem alcançar todas as estações.}

## Text
+ \bbbold{Input}
+
+ \vspace{0.1in}
+
+ \bbenglish{The input consists of an integer $N$, followed by $N$ pairs of integers $X_i, Y_i$, indicating the localization coordinates of each station. The first pair of coordinates determines the position of the order-dispatch station, while the remaining $N - 1$ pairs are the coordinates of the other stations. The following constraints are imposed: $-20\leq X_i, Y_i\leq 20$, and $1\leq N\leq 1000$.  The input is terminated with $N = 0$.}
+
+ \vspace{0.2in}
+
+ \bbbold{Output}
+
+ \vspace{0.1in}
+
+ \bbenglish{For each given expression, the output will echo a line with the indicating if all stations can be reached or not (see sample output for the exact format).}

## Text
+ \bbbold{Entrada}
+
+ \vspace{0.1in}
+
+ \bbtext{A entrada consiste em um inteiro $N$, seguido por $N$ pares de inteiros $X_i, Y_i$, indicando as coordenadas de localização de cada estação. O primeiro par de coordenadas determina a posição da estação de controle, enquanto que os $N - 1$ pares restantes são as coordenadas das outras estações. São impostas as seguintes restrições: $-20\leq X_i, Y_i\leq 20$ e $1\leq N\leq 1000$. A entrada terminada com $N = 0$.}
+
+ \vspace{0.2in}
+
+ \bbbold{Saída}
+
+ \vspace{0.1in}
+
+ \bbtext{Para cada expressão dada imprima uma linha indicando se todas as estações podem ser atingidas ou não (veja o exemplo para o formato exato da saída).}

## Scene
+ \node[anchor=west] at (0, 7) { \bbbold{Exemplo de entrada e saída} };

+ \node[anchor=west] at (1, 6) { \bbtext{4} };

+ \node[anchor=west] at (2, 6) { \bbcomment{\# de estações} };
+ \draw[->,color=BBViolet] (2.0, 6) -- (1.6, 6);

- \node[anchor=west] at (2, 6) { \bbcomment{\# de estações} };
- \draw[->,color=BBViolet] (2.0, 6) -- (1.6, 6);
+ \node[anchor=west] at (1, 5.5) { \bbtext{1 0 0 1 -1 0 0 -1} };

+ \draw[color=BBViolet] (1.2, 5.2) -- (1.2, 5.1) -- (1.6, 5.1) -- (1.6, 5.2);
+ \draw[->,color=BBViolet] (1.4, 5.1) -- (1.4, 4.7);
+ \node at (1.4, 4.3) { $P_1$ };

+ \draw[color=BBViolet] (1.85, 5.2) -- (1.85, 5.1) -- (2.25, 5.1) -- (2.25, 5.2);
+ \draw[->,color=BBViolet] (2.05, 5.1) -- (2.05, 4.7);
+ \node at (2.05, 4.3) { $P_2$ };

+ \draw[color=BBViolet] (2.6, 5.2) -- (2.6, 5.1) -- (3.0, 5.1) -- (3.0, 5.2);
+ \draw[->,color=BBViolet] (2.8, 5.1) -- (2.8, 4.7);
+ \node at (2.8, 4.3) { $P_3$ };

+ \draw[color=BBViolet] (3.4, 5.2) -- (3.4, 5.1) -- (3.8, 5.1) -- (3.8, 5.2);
+ \draw[->,color=BBViolet] (3.6, 5.1) -- (3.6, 4.7);
+ \node at (3.6, 4.3) { $P_4$ };

- \draw[color=BBViolet] (1.2, 5.2) -- (1.2, 5.1) -- (1.6, 5.1) -- (1.6, 5.2);
- \draw[->,color=BBViolet] (1.4, 5.1) -- (1.4, 4.7);
- \node at (1.4, 4.3) { $P_1$ };
- \draw[color=BBViolet] (1.85, 5.2) -- (1.85, 5.1) -- (2.25, 5.1) -- (2.25, 5.2);
- \draw[->,color=BBViolet] (2.05, 5.1) -- (2.05, 4.7);
- \node at (2.05, 4.3) { $P_2$ };
- \draw[color=BBViolet] (2.6, 5.2) -- (2.6, 5.1) -- (3.0, 5.1) -- (3.0, 5.2);
- \draw[->,color=BBViolet] (2.8, 5.1) -- (2.8, 4.7);
- \node at (2.8, 4.3) { $P_3$ };
- \draw[color=BBViolet] (3.4, 5.2) -- (3.4, 5.1) -- (3.8, 5.1) -- (3.8, 5.2);
- \draw[->,color=BBViolet] (3.6, 5.1) -- (3.6, 4.7);
- \node at (3.6, 4.3) { $P_4$ };
+ \node[draw,circle,color=BBBlue,very thick] (A) at (10, 3) { $P_1$ };
+ \node[draw,circle,very thick] (B) at (8, 5) { $P_2$ };
+ \node[draw,circle,very thick] (C) at (6, 3) { $P_3$ };
+ \node[draw,circle,very thick] (D) at (8, 1) { $P_4$ };

+ \draw[-latex,color=BBOrange,very thick] (A) to [bend right] (B);
+ \draw[-latex,color=BBOrange,very thick] (A) to [bend left] (D);

+ \draw[-latex,very thick] (B) to [bend right] (A);
+ \draw[-latex,color=BBOrange,very thick] (B) to [bend right] (C);

+ \draw[-latex,very thick] (B) (2.4, 5.1) to (2.4, 4.6);
+ \node at (2.4, 4.2) { \bbinfo{Ok} };

## Scene
+ \node[anchor=west] at (0, 7) { \bbbold{Exemplo de entrada e saída} };

+ \node[anchor=west] at (1, 6) { \bbtext{6} };
+ \node[anchor=west] at (1, 5.5) { \bbtext{0 3 0 4 1 3 -1 3 -1 -4 -2 -5} };

+ \node[draw,circle,color=BBBlue,very thick] (A) at (10, 7) { \scriptsize \bbinfo{1} };
+ \node[draw,circle,very thick] (B) at (10, 6) { \scriptsize \bbtext{2} };
+ \node[draw,circle,very thick] (C) at (11, 6) { \scriptsize \bbtext{3} };
+ \node[draw,circle,very thick] (D) at (9, 6) { \scriptsize \bbtext{4} };
+ \node[draw,circle,very thick] (E) at (9, 2) { \scriptsize \bbtext{5} };
+ \node[draw,circle,very thick] (F) at (8, 1) { \scriptsize \bbtext{6} };

+ \draw[-latex,color=BBOrange] (A) to [bend right] (B);
+ \draw[-latex,color=BBOrange] (A) to [bend right] (D);

+ \draw[-latex,color=BBOrange] (B) to [bend right] (A);
+ \draw[-latex,color=BBOrange] (B) to [bend right] (D);

+ \draw[-latex,color=BBOrange] (D) to (A);
+ \draw[-latex,color=BBOrange] (D) to [bend right] (B);

+ \draw[-latex,very thick] (B) (3.2, 5.1) to (3.2, 4.6);
+ \node at (3.2, 4.4) { \bbalert{x} };

## Scene
+ \node[anchor=west] at (0, 6) { \Large \bbbold{Solução} };

+ \node[anchor=west] at (1, 5) { $\star$ \bbtext{Adjacência de $u$: $(d^2, x, y, v)$} };

+ \node[anchor=west] at (1, 4) { $\star$ \bbtext{Critério do problema = ordenação lexicográfica} };

+ \node[anchor=west] at (1, 3) { $\star$ \bbtext{BFS pode ser usada para identificar os vértices atingíveis} };

+ \node[anchor=west] at (1, 2) { $\star$ \bbbold{Complexidade:} \bbtext{$O(N^2)$ por caso de teste} };

## Frame
+ \inputsnippet{cpp}{12}{31}{codes/10687.cpp}

## Frame
+ \inputsnippet{cpp}{33}{49}{codes/10687.cpp}

## Frame
+ \inputsnippet{cpp}{50}{62}{codes/10687.cpp}

# End
