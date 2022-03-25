<?php



  $nord = array( 'Rossi' => 'Lombardia',
                 'Verdi' => 'Piemonte');
  $centro= array ( 'Bianchi' => 'Lazio',
                   'Blu' => 'Abbruzzo');
  $sud= array ( 'Celestini' => 'Campania',
                'Viola' => 'Puglia',
                'Pangallo' => 'Calabria');

  $italia= array_merge ($nord, $centro, $sud);
  while ( list($chiave, $valore)= each ($italia)  )
  echo "$chiave: $valore <br>";

?>
