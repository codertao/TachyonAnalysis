
/* rotate-left-7 XOR of bytes after 20-byte header, using header key (matches TachyonFileFormats
   cbin.py) */

void Cbin_Decrypt(byte *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  
  if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
    uVar1 = *param_3;
    do {
      uVar1 = uVar1 << 7 | uVar1 >> 0x19;
      *param_1 = *param_1 ^ (byte)uVar1;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    *param_3 = uVar1;
  }
  return;
}

