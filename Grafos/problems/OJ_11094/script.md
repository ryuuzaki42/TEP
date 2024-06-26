## Frame
+ \bbcover{OJ 11094}{Continents}{Prof. Edson Alves}{Faculdade UnB Gama}

## Text
+ \bbenglish{Mijid the Great is the king of Dodars territory. He likes to travel between the cities in his territory and actually, you can never see him in the same city as where he was the day before. Therefore, he captured all territories of his continent! In spite of this fact, he has seen all cities of his territory so far and wants to capture another continent in order to have some choices to travel into new cities. Now, having the world map, he needs your help to find the biggest continent except the one in which he resides.}
+
+ \vspace{0.1in}
+ 
+ \bbenglish{Maps are given as $M\times N$ tables, filled with at most two different letters denoting land and water regions. A continent is a set of connected land regions which is completely surrounded by water regions or the end of map. Two regions are assumed to be connected if they have an edge in common. The coordinates of top left region is $(0, 0)$ and bottom right region $(M - 1, N - 1)$. Region with coordinates $(x, N − 1)$ should be assumed to have a common edge with region $(x, 0)$ for every $x$ between $0$ and $M - 1$ (inclusive).}

## Text
+ \bbtext{Mijid o Grande é o rei dos território dos Dodars. Ele gosta de viajar entre as cidades em seu território e, na verdade, você nunca o verá na mesma cidade onde ele estava no dia anterior. Por isso, ele capturou todos os territórios do continente! Apesar disso, ele já visitou todas as cidades de seu território e quer capturar outro continente de modo que ele tenha algumas novas escolhas de cidades para visitar. Agora, tendo o mapa-mundi, ele quer sua ajuda para encontrar o maior continente que não seja o que ele vive.}
+
+ \vspace{0.1in}
+ 
+ \bbtext{Os mapas são dados com malhas $M\times N$, preenchidas com no máximo dois caracteres distintos que indicam regiões de terra firme e de água. Um continente é um conjunto de regiões de terra firme conectadas e que é completamente rodeado por regiões aquáticas ou pelo fim do mapa. Duas regiões estão conectadas se elas compartilham uma aresta em comum. As coordenadas do canto superior esquerdo são $(0, 0)$ e o canto inferior direito é o ponto $(M - 1, N - 1)$. Assuma que uma região com coordenadas $(x, N − 1)$ tenha uma aresta em comum com a região $(x, 0)$ para todo $x$ entre $0$ e $M - 1$ (inclusive).}

## Text
+ \bbbold{Input}
+
+ \vspace{0.1in}
+
+ \bbenglish{There will be several test cases. Each test case contains two integers $M\leq 20$ and $N\leq 20$ in the first line denoting the number of rows and columns in the map respectively. Next, there will be $M$ lines of exactly $N$ characters representing the map. Finally in the last line there would be two integers $0\leq X < M$ and $0\leq Y < N$, the coordinates of the region in which Mijid the Great currently stays.  There will one blank line after each test case.}
+
+ \vspace{0.2in}
+
+ \bbbold{Output}
+
+ \vspace{0.1in}
+
+ \bbenglish{For each test case, output a line containing an integer that is the number of regions in the biggest continent that Mijid the Great can capture.}

## Text
+ \bbbold{Entrada}
+
+ \vspace{0.1in}
+
+ \bbtext{Há vários casos de teste. A primeira linha de cada caso de teste contém dois inteiros $M\leq 20$ e $N\leq 20$, representando o número de linhas e colunas no mapa, respectivamente. Em seguida, há $M$ linhas com exatamente $N$ caracteres, representando o mapa. Finalmente, na última linha há dois inteiros $0\leq X < M$ e $0\leq Y < N$, as coordenadas da região na qual Mijid o Grande atualmente vive.  Há uma linha em branco após cada caso de teste.}
+
+ \vspace{0.2in}
+
+ \bbbold{Saída}
+
+ \vspace{0.1in}
+
+ \bbtext{Para cada caso de teste imprima uma linha contendo um inteiro que indica o número de regiões no maior continente que Mijid o Grande pode capturar.}

## Scene
+ \node[anchor=west] at (0, 7) { \bbbold{Exemplo de entrada e saída} };

+ \node[anchor=west] at (1, 6) { \bbtext{\texttt{5 5}} };

+ \node at (1.2, 5) { \footnotesize \bbcomment{\# de linhas} };
+ \draw[->,color=BBViolet] (1.2, 5.2) -- (1.2, 5.8);

+ \node[anchor=west] at (2.6, 6) { \footnotesize \bbcomment{\# de colunas} };
+ \draw[->,color=BBViolet] (1.8, 6) -- (2.5, 6);

- \node at (1.2, 5) { \footnotesize \bbcomment{\# de linhas} };
- \draw[->,color=BBViolet] (1.2, 5.2) -- (1.2, 5.8);
- \node[anchor=west] at (2.6, 6) { \footnotesize \bbcomment{\# de colunas} };
- \draw[->,color=BBViolet] (1.8, 6) -- (2.5, 6);
+ \node[anchor=west] at (1, 5.5) { \bbtext{\texttt{wwwww}} };
+ \node[anchor=west] at (1, 5.0) { \bbtext{\texttt{wwllw}} };
+ \node[anchor=west] at (1, 4.5) { \bbtext{\texttt{wwwww}} };
+ \node[anchor=west] at (1, 4.0) { \bbtext{\texttt{wllww}} };
+ \node[anchor=west] at (1, 3.5) { \bbtext{\texttt{wwwww}} };

+ \node at (1.5, 2.5) { \footnotesize \bbcomment{mapa} };
+ \draw[->,color=BBViolet] (1.5, 2.7) -- (1.5, 3.3);

- \node at (1.5, 2.5) { \footnotesize \bbcomment{mapa} };
- \draw[->,color=BBViolet] (1.5, 2.7) -- (1.5, 3.3);
+ \node[anchor=west] at (1, 3) { \bbtext{\texttt{1 3}} };

+ \node[anchor=west] at (0.5, 2) { \footnotesize \bbcomment{coordenada $x$ da residência do rei} };
+ \draw[->,color=BBViolet] (1.2, 2.2) -- (1.2, 2.8);

+ \node[anchor=west] at (2.6, 3) { \footnotesize \bbcomment{coordenada $y$ da residência do rei} };
+ \draw[->,color=BBViolet] (1.8, 3) -- (2.5, 3);

- \node[anchor=west] at (1, 5.0) { \bbtext{\texttt{wwllw}} };
+ \node[anchor=west] at (1, 5.0) { \bbtext{\texttt{wwl\textcolor{BBRed}{l}w}} };

- \node[anchor=west] at (0.5, 2) { \footnotesize \bbcomment{coordenada $x$ da residência do rei} };
- \draw[->,color=BBViolet] (1.2, 2.2) -- (1.2, 2.8);
- \node[anchor=west] at (2.6, 3) { \footnotesize \bbcomment{coordenada $y$ da residência do rei} };
- \draw[->,color=BBViolet] (1.8, 3) -- (2.5, 3);
+ \node[fill,circle,color=BBRed] at (5, 5) { };
+ \node[anchor=west] at (5.3, 5) { \bbtext{Território do rei} };
- \node[anchor=west] at (1, 5.0) { \bbtext{\texttt{wwl\textcolor{BBRed}{l}w}} };
+ \node[anchor=west] at (1, 5.0) { \bbtext{\texttt{ww\textcolor{BBRed}{ll}w}} };

- \node[anchor=west] at (1, 4.0) { \bbtext{\texttt{wllww}} };
+ \node[anchor=west] at (1, 4.0) { \bbtext{\texttt{w\textcolor{BBOrange}{ll}ww}} };
+ \node[fill,circle,color=BBOrange] at (5, 4) { };
+ \node[anchor=west] at (5.3, 4) { \bbtext{Continente} };

- \node[anchor=west] at (1, 5.5) { \bbtext{\texttt{wwwww}} };
- \node[anchor=west] at (1, 4.5) { \bbtext{\texttt{wwwww}} };
- \node[anchor=west] at (1, 3.5) { \bbtext{\texttt{wwwww}} };
+ \node[anchor=west] at (1, 5.5) { \bbtext{\texttt{\textcolor{BBCyan}{wwwww}}} };
+ \node[anchor=west] at (1, 4.5) { \bbtext{\texttt{\textcolor{BBCyan}{wwwww}}} };
+ \node[anchor=west] at (1, 3.5) { \bbtext{\texttt{\textcolor{BBCyan}{wwwww}}} };
- \node[anchor=west] at (1, 5.0) { \bbtext{\texttt{ww\textcolor{BBRed}{ll}w}} };
+ \node[anchor=west] at (1, 5.0) { \bbtext{\texttt{\textcolor{BBCyan}{ww}\textcolor{BBRed}{ll}\textcolor{BBCyan}{w}}} };
- \node[anchor=west] at (1, 4.0) { \bbtext{\texttt{w\textcolor{BBOrange}{ll}ww}} };
+ \node[anchor=west] at (1, 4.0) { \bbtext{\texttt{\textcolor{BBCyan}{w}\textcolor{BBOrange}{ll}\textcolor{BBCyan}{ww}}} };
+ \node[fill,circle,color=BBCyan] at (5, 3) { };
+ \node[anchor=west] at (5.3, 3) { \bbtext{Água} };

+ \draw[-latex,very thick] (1.4, 2.0) to (1.4, 2.7);
+ \node at (1.4, 1.7) { \bbinfo{2} };

## Scene
+ \node[anchor=west] at (0, 7) { \Large \bbbold{Solução} };

+ \node[anchor=west] at (1, 6) { $\star$ \bbtext{O mapa induz um grafo $G$ onde: } };

+ \node[anchor=west] at (2, 5) { $(a)$ \bbtext{os vértices são os territórios, e } };

+ \node[anchor=west] at (2, 4) { $(b)$ \bbtext{as arestas são dadas pelas arestas comuns entre territórios} };

+ \node[anchor=west] at (1, 3) { $\star$ \bbtext{O caractere que identifica um território é dado pelas coordenadas do rei} };

+ \node[anchor=west] at (1, 2) { $\star$ \bbtext{As arestas entre os extremos laterais podem ser determinadas por} };
+ \node[anchor=west] at (0.5, 1.5) { \bbtext{aritmética modular } };

## Frame
+ \inputsnippet{cpp}{10}{29}{codes/11094.cpp}

## Frame
+ \inputsnippet{cpp}{31}{49}{codes/11094.cpp}

# End
