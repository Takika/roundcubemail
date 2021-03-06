<?php

/*
 +-----------------------------------------------------------------------+
 | plugins/password/localization/<lang>.inc                              |
 |                                                                       |
 | Localization file of the Roundcube Webmail Password plugin            |
 | Copyright (C) 2012-2013, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/plugin-password/
*/
$labels['changepasswd']  = 'Alterar palavra-passe';
$labels['curpasswd']  = 'Palavra-passe actual:';
$labels['newpasswd']  = 'Nova palavra-passe:';
$labels['confpasswd']  = 'Confirmar palavra-passe:';
$messages['nopassword'] = 'Introduza a nova palavra-passe.';
$messages['nocurpassword'] = 'Introduza a palavra-passe actual.';
$messages['passwordincorrect'] = 'Palavra-passe actual incorrecta.';
$messages['passwordinconsistency'] = 'As palavras-passe não combinam, tente novamente.';
$messages['crypterror'] = 'Não foi possível gravar a nova palavra-passe. Função de criptografia inexistente.';
$messages['connecterror'] = 'Não foi possível gravar a nova palavra-passe. Erro de ligação.';
$messages['internalerror'] = 'Não foi possível gravar a nova palavra-passe.';
$messages['passwordshort'] = 'A palavra-passe deve ter pelo menos $length caracteres';
$messages['passwordweak'] = 'A palavra-passe deve incluir pelo menos um numero e um sinal de pontuação.';
$messages['passwordforbidden'] = 'A palavra-passe contém caracteres não suportados.';
$messages['firstloginchange'] = 'Este é o seu primeiro acesso. Por favor, altere a sua palavra-passe.';
$messages['disablednotice'] = 'O sistema está em manutenção e a alteração da password não é possível neste momento. Tudo deve volta ao normal em breve. Pedimos desculpas por qualquer inconveniente.';
