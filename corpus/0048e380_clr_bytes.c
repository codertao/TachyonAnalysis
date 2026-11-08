
void clr_bytes(undefined4 *tgt,uint byte_len)

{
  uint uVar1;
  
  for (uVar1 = byte_len >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *tgt = 0;
    tgt = tgt + 1;
  }
  for (byte_len = byte_len & 3; byte_len != 0; byte_len = byte_len - 1) {
    *(undefined1 *)tgt = 0;
    tgt = (undefined4 *)((int)tgt + 1);
  }
  return;
}

