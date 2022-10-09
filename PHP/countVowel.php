<?php

function count_Vowels($string)
{
    preg_match_all('/[aeiou]/i', $string, $matches);
    return count($matches[0]);
}
print_r(count_Vowels('sampleInput'));
