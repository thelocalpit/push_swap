# push_swap

sorting. how to do it. 

ok cosa dobbiamo fare per sortare gli argomenti passati. 
la stategia è quella di torvare la mossa più economica. Quindi divederemo i procedimenti in tre fasi: la prima prevede un'analisi di ciascun elemento calcolandone il numero di mosse tenendo bene a mente che il procedimento deve essere quello di portare in alto(prima posizione) l'elemento e poi pusharlo nell'array b; la seconda invece è quella di fare il push da A a B.; la terza quella di riportare in maniera ordinata su A da B. 
Cose da tenere in considerazione:

- 3 elementi verranno sempre lasciati nello stack A, perchè facilmente ordinabili con 1 mossa sola. Quindi il procedimento andrà avanti fintanto che ci sono tre elementi nell'A. 
- è necessario tenere traccia del max e del min nell'array B ogni volta che spostiamo un elemento. questo perchè dobbiamo fare in modo di inserire già in ordine corretto il numero che pushamo da A. 
- affinchè l'algoritmo che stiamo creando performi in maniera dignitosa, dobbiamo necessariamente dividere i duo array a metà. in questo modo sapremo quali sono le mosse più economiche da fare. avremo varie situazioni, che sono quelle dove teniamo di conto dove deve essere inserito il nuovo elemento nello stack b e dove attualmente si trova nella stack A: sopra la metà, sotto la metà di entrambe le cose. 

Dunque sarà poi importante controllare che effettivamente le mosse siano di un numero accettabile. 