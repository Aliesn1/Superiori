<?php

#la funzione implode() è simmetrica dell'explode essa crea una stringa (o un file di dati) partendo da un array e utilizzando un simbolo di seprazione, in questo caso "_"

  $persona [8]= 'anna';
  $persona [54]= 'luca';
  $persona [100]= 'maria';
  $persona []= 'carlo';

  $utenti= implode ('_', $persona);
  echo "utenti: ".$utenti;








?>
