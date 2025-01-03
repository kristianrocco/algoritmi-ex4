# algoritmi-ex4

Questa libreria implementa una struttura dati Grafo ottimizzata per dati sparsi, utilizzando una Tabella Hash per garantire efficienza. Supporta grafi diretti e non diretti, etichettati e non etichettati, con operazioni veloci e flessibili.
La libreria è ottimizzata per grandi grafi sparsi e offre prestazioni eccellenti, con operazioni conformi alla complessità prevista.
La libreria offre un'ampia gamma di funzioni per creare, manipolare e analizzare un grafo, sia diretto che non diretto, etichettato o non etichettato. Tra le principali funzionalità:
Creazione del grafo con opzioni per grafi diretti e/o etichettati.
Operazioni sui nodi:
Aggiunta, rimozione, verifica di esistenza.
Recupero dei nodi e dei loro vicini.
Operazioni sugli archi:
Aggiunta, rimozione, verifica di esistenza.
Recupero delle etichette.
Statistiche: numero di nodi, archi, e nodi adiacenti.
Le funzioni sono progettate per garantire efficienza, con molte operazioni che operano in tempo costanteO(1), assumendo un grafo sufficientemente sparso.
Ogni nodo è rappresentato come una chiave nella Tabella Hash, associato a una lista di adiacenza.
Per grafi non diretti, ogni arco 
(a,b) viene aggiunto come due archi distinti 
(a→b) e (b→a).
Per grafi non etichettati, le etichette degli archi sono sempre impostate a NULL.
L'implementazione è stata verificata con una serie di test per garantire:
La correttezza delle operazioni, sia per grafi diretti che non diretti.
La conformità alla complessità prevista, con ottime prestazioni per grafi sparsi.
Questa libreria è ideale per applicazioni che richiedono la gestione di grandi grafi con molti nodi e pochi archi, come reti sociali o grafi di rete.
