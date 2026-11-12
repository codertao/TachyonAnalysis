
/* sweep: guess */

int Midi_ReadVarLen(byte *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  *param_3 = 0;
  do {
    if (param_2 == 0) {
      return 0;
    }
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
    iVar2 = iVar2 + 1;
    *param_3 = bVar1 & 0x7f | *param_3 << 7;
  } while ((bVar1 & 0x80) != 0);
  return iVar2;
}

