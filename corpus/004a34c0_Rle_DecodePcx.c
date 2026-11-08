
/* PCX RLE: b>=0xC0 -> repeat next (b-0xC0) times, else literal */

void Rle_DecodePcx(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  do {
    while( true ) {
      bVar1 = *param_1;
      if (0xbf < bVar1) break;
      *param_2 = bVar1;
      param_2 = param_2 + 1;
      iVar6 = param_3 + -1;
      bVar3 = param_3 < 1;
      param_3 = iVar6;
      param_1 = param_1 + 1;
      if (iVar6 == 0 || bVar3) {
        return;
      }
    }
    bVar2 = param_1[1];
    uVar4 = (uint)(byte)(bVar1 + 0x40);
    do {
      *param_2 = bVar2;
      param_2 = param_2 + 1;
      iVar6 = param_3 + -1;
      if (iVar6 == 0 || param_3 < 1) {
        return;
      }
      uVar5 = uVar4 - 1;
      bVar3 = 0 < (int)uVar4;
      uVar4 = uVar5;
      param_3 = iVar6;
    } while (uVar5 != 0 && bVar3);
    param_1 = param_1 + 2;
  } while (0 < iVar6);
  return;
}

