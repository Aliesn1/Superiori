<?php

  $utenti = array('claudio' => 'sistemista',
                  'nicola'=> 'programmatore',
                  'antonio'=>'utente'
                );
  //la funzione each() estrae una ad una le componenti del vettore utenti e tramite la funzione list()
  // le pone in $chiave e in $val
  while( list($chiave, $val) = each($utenti)){
    echo " $chiave: $val <br>";
  }

?>
