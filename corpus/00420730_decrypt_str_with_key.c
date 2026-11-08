
void decrypt_str_with_key(char *enc,undefined4 probably_key)

{
  char *pcVar1;
  char cVar2;
  
  if (enc != (char *)0x0) {
    GLBL_maybe_crypt_skip_key = some_extract_key_I_think(probably_key);
    cVar2 = *enc;
    while (cVar2 != '\0') {
      some_kind_of_decrypt_i_think(enc);
      pcVar1 = enc + 1;
      enc = enc + 1;
      cVar2 = *pcVar1;
    }
  }
  return;
}

