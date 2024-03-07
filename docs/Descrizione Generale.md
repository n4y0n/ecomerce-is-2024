## 1 Descrizione Generale

Il sistema di E-commerce in questione è progettato per offrire una piattaforma online efficiente e sicura per la gestione delle transazioni commerciali. L'obiettivo principale del backend è di gestire l'elaborazione delle richieste provenienti dal frontend, garantendo una gestione efficace del catalogo dei prodotti, degli ordini e delle operazioni connesse.

### 1.2 Ambiente Operativo

Il sistema opera in un ambiente web-based, interagendo con gli utenti attraverso un'interfaccia utente intuitiva e responsiva. Il frontend comunica con il backend mediante richieste HTTP, seguendo il modello architetturale RESTful per garantire una comunicazione efficiente e scalabile.

### 1.3 Architettura del Sistema

Il backend del sistema è basato su un'architettura a microservizi per garantire la modularità, la scalabilità e la manutenibilità del sistema. I microservizi sono organizzati per funzionalità chiave, tra cui la gestione del catalogo prodotti, la gestione degli ordini, la gestione degli utenti e l'integrazione con sistemi di pagamento.

### 1.4 Componenti Principali del Backend

1.4.1 Gestione del Catalogo Prodotti:
    Responsabile della gestione, aggiornamento e recupero delle informazioni sui prodotti.
    Fornisce API per l'accesso alle informazioni del prodotto.

1.4.2 Gestione degli Ordini:
    Gestisce il ciclo di vita degli ordini, dalla creazione alla spedizione.
    Interagisce con il modulo di pagamento per l'autorizzazione e la conferma degli ordini.

1.4.3 Gestione degli Utenti:
    Gestisce le informazioni degli utenti, inclusa l'autenticazione e l'autorizzazione.
    Fornisce API per la gestione dei profili utente.

1.4.4 Integrazione con Sistemi di Pagamento:
    Collega il sistema E-commerce a provider di servizi di pagamento.
    Gestisce la comunicazione sicura per l'autorizzazione e l'elaborazione dei pagamenti.

### 1.5 Flusso Operativo

1.5.1 Un utente effettua l'accesso al sito web e naviga attraverso il catalogo prodotti.
1.5.2 L'utente seleziona un prodotto e effettua un ordine.
1.5.3 Il frontend invia una richiesta al backend, che gestisce la creazione e la gestione dell'ordine.
1.5.4 Il backend comunica con il modulo di pagamento per l'autorizzazione e l'elaborazione del pagamento.
1.5.5 Una volta autorizzato il pagamento, l'ordine viene confermato e il backend notifica il frontend.
1.5.6 Il backend gestisce il processo di spedizione e aggiorna lo stato dell'ordine di conseguenza.

### 1.6 Figure Illustrative

In allegato sono fornite figure illustrative che mostrano l'architettura del sistema e il flusso operativo descritto sopra, al fine di fornire una visione chiara del funzionamento complessivo del backend nel contesto del sistema di E-commerce.


## 2 User requirements

I requisiti utenti identificano le funzionalità chiave e i vincoli del sistema dal punto di vista degli utenti. Ogni requisito è numerato in modo univoco e esprime un singolo vincolo sul sistema.

### 2.1 Requisiti Funzionali

- R1: Registrazione Utente
    Gli utenti devono poter registrare un account nel sistema fornendo informazioni di base come nome, indirizzo e-mail e password.
- R2: Autenticazione Utente
    Gli utenti registrati devono poter accedere al sistema attraverso l'inserimento di credenziali valide (indirizzo e-mail e password).
- R3: Navigazione Catalogo Prodotti
    Gli utenti devono poter navigare facilmente attraverso il catalogo dei prodotti, visualizzando dettagli e immagini dei singoli prodotti.
- R4: Aggiunta al Carrello
    Gli utenti devono poter aggiungere prodotti al proprio carrello virtuale in modo intuitivo.
- R5: Gestione del Carrello
    Gli utenti devono poter visualizzare, modificare e eliminare i prodotti presenti nel carrello prima di procedere con il pagamento.
- R6: Creazione di un Ordine
    Gli utenti devono poter effettuare ordini completando il processo di pagamento, inserendo le informazioni di spedizione e confermando l'acquisto.
- R7: Visualizzazione Stato Ordini
    Gli utenti devono poter visualizzare lo stato corrente dei propri ordini, compresi quelli in fase di elaborazione, spediti o consegnati.

### 2.2 Requisiti Non-Funzionali

- R8: Sicurezza
    Il sistema deve garantire la sicurezza delle informazioni degli utenti, utilizzando pratiche di crittografia per la gestione delle credenziali e dei dati sensibili.
- R9: Prestazioni
    Il sistema deve fornire una risposta veloce alle richieste degli utenti, garantendo una navigazione fluida e tempi di caricamento minimi.

### 2.3 Diagrammi Use Case UML

A seguire sono presentati due diagrammi Use Case UML che illustrano interazioni specifiche degli utenti con il sistema:

#### 2.3.1 Diagramma Use Case 1: Registrazione e Autenticazione Utente

[Inserire diagramma Use Case 1]

#### 2.3.2 Diagramma Use Case 2: Processo di Acquisto

[Inserire diagramma Use Case 2]

I diagrammi sopra evidenziano le interazioni chiave tra gli utenti e il sistema, fornendo una panoramica visiva delle funzionalità principali implementate nel sistema di E-commerce.

## 3 Requisiti di Sistema

I requisiti di sistema delineano i vincoli e le caratteristiche chiave dell'infrastruttura tecnologica che supporta il sistema di E-commerce. Ogni requisito è numerato in modo univoco e esprime un singolo vincolo sul sistema.

### 3.1 Requisiti di Infrastruttura

- SR1: Architettura a Microservizi
    Il sistema deve essere implementato seguendo un'architettura a microservizi per garantire modularità, scalabilità e manutenibilità.
- SR2: Linguaggio di Programmazione
    Il backend del sistema deve essere sviluppato utilizzando un linguaggio di programmazione scalabile e adatto allo sviluppo web, come ad esempio Java o Python.
- SR3: Database Relazionale
    Il sistema deve utilizzare un database relazionale per la persistenza dei dati, garantendo integrità e coerenza delle informazioni.
- SR4: Sicurezza delle Comunicazioni
    Tutte le comunicazioni tra il frontend e il backend devono essere crittografate utilizzando protocolli sicuri come HTTPS.
- SR5: Gestione degli Utenti e delle Sessioni
    Il sistema deve implementare un sistema robusto di gestione degli utenti e delle sessioni, garantendo autenticazione sicura e autorizzazione appropriata.

### 3.2 Diagrammi UML

#### 3.2.1 Diagramma dell'Architettura del Sistema

[Inserire diagramma dell'architettura]

Il diagramma illustra l'architettura a microservizi del sistema, evidenziando le relazioni e le interazioni tra i componenti principali.

#### 3.2.2 Activity Diagram UML

[Inserire Activity Diagram]

L'Activity Diagram mostra come le diverse componenti del sistema concorrono ad soddisfare i requisiti utenti durante il processo di acquisto e gestione degli ordini.

#### 3.2.3 State Diagram UML

[Inserire State Diagram]

Lo State Diagram rappresenta lo stato e i cambiamenti di stato di una delle componenti del sistema, fornendo una visione dettagliata del ciclo di vita di quella specifica funzionalità.

#### 3.2.4 Message Sequence Chart UML

[Inserire Message Sequence Chart]

Il Message Sequence Chart illustra la sequenza di messaggi scambiati tra le diverse componenti del sistema durante una transazione, evidenziando il flusso di comunicazione.

Questi diagrammi forniscono una rappresentazione visiva chiara dell'architettura del sistema, delle attività, degli stati e delle sequenze di messaggi, facilitando la comprensione delle dinamiche e delle interazioni nel contesto del sistema di E-commerce.

## 4. Implementazione

La sezione di implementazione fornisce una panoramica generale dell'approccio implementativo, inclusi pseudo-codici per le componenti principali del sistema, uno schema del database utilizzato e una descrizione delle connessioni con Redis.

**5.1 Panoramica Generale dell'Implementazione**

L'implementazione del sistema di E-commerce segue un approccio a microservizi, dove ogni servizio è responsabile di una specifica funzionalità. La comunicazione tra i servizi avviene attraverso API RESTful. Inoltre, si fa uso di un database relazionale per la persistenza dei dati, e Redis viene utilizzato come sistema di caching per migliorare le prestazioni.

**5.2 Pseudo-codice delle Componenti del Sistema**

*Esempio di Pseudo-codice per la Gestione del Catalogo Prodotti (Microservizio 1):*

```python
# Microservizio 1: Gestione del Catalogo Prodotti

# Definizione delle API
GET /api/products
    # Restituisce l'elenco dei prodotti nel catalogo

GET /api/products/{product_id}
    # Restituisce i dettagli di un prodotto specifico

POST /api/products
    # Aggiunge un nuovo prodotto al catalogo

PUT /api/products/{product_id}
    # Aggiorna le informazioni di un prodotto esistente

DELETE /api/products/{product_id}
    # Elimina un prodotto dal catalogo
```

*Esempio di Pseudo-codice per la Gestione degli Ordini (Microservizio 2):*

```python
# Microservizio 2: Gestione degli Ordini

# Definizione delle API
POST /api/orders
    # Crea un nuovo ordine

GET /api/orders/{order_id}
    # Restituisce i dettagli di un ordine specifico

PUT /api/orders/{order_id}/status
    # Aggiorna lo stato di un ordine (es. da "in elaborazione" a "spedito")

GET /api/orders/user/{user_id}
    # Restituisce l'elenco degli ordini di un utente
```

**5.3 Schema del Database**

Lo schema del database utilizzato è basato su un modello relazionale. Un esempio semplificato potrebbe essere:

- **Tabella "Users":**
  - user_id (PK)
  - username
  - email
  - password_hash
  - ...

- **Tabella "Products":**
  - product_id (PK)
  - name
  - description
  - price
  - ...

- **Tabella "Orders":**
  - order_id (PK)
  - user_id (FK)
  - order_date
  - status
  - ...

- **Tabella "OrderItems":**
  - order_item_id (PK)
  - order_id (FK)
  - product_id (FK)
  - quantity
  - ...

**5.4 Connessioni con Redis**

Redis viene utilizzato come sistema di caching per migliorare le prestazioni del sistema, riducendo il tempo di accesso a dati frequentemente utilizzati. In particolare, è possibile implementare la cache per risultati di query frequenti, come l'elenco dei prodotti più venduti o la memorizzazione temporanea di sessioni utente.

*Esempio di Pseudo-codice per Connessione con Redis:*

```python
# Connettersi a Redis
redis = connect_to_redis()

# Esempio di caching per l'elenco dei prodotti più venduti
def get_top_selling_products():
    key = "top_selling_products"
    cached_result = redis.get(key)

    if cached_result:
        return cached_result
    else:
        # Effettuare la query al database per ottenere i prodotti più venduti
        top_selling_products = query_database_for_top_selling_products()

        # Salvare il risultato nella cache di Redis per 1 ora
        redis.setex(key, 3600, top_selling_products)

        return top_selling_products
```

Questa implementazione illustra come Redis può essere utilizzato per memorizzare temporaneamente i risultati di query costose, riducendo così il carico sul database principale e migliorando le prestazioni complessive del sistema di E-commerce.