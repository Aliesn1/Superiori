<?php

  $colori=array ("blu", "bianco", "rosso", "verde");
  echo $colori[1];
  $elementi=array ("Fe"=>"ferro", "Na"=>"sodio", "Al"=>"alluminio");
  echo $elementi["Na"];

  $partecipanti=[
    'Simone'=>[
      'anno'=>'1986',
      'sesso'=>'m',
      'e-mail'=>'test@notreal.com'
    ],
  'Samuele'=>[
    'anno'=>'1993',
    'sesso'=>'m',
    'e-mail'=>'test2@notreal.com'
  ],
  'Giulia'=>[
    'anno'=>'1997',
    'sesso'=>'f',
    'e-mail'=>'test3@notreal.com'
  ]
  ];
  print_r ($partecipanti ["Simone"]);

?>
