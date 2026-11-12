
/* sweep: guess */

void Pal_IdentityRemap(int param_1,int param_2)

{
  short *psVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = 0x100;
  psVar1 = (short *)(param_2 + 4);
  pbVar2 = (byte *)(param_1 + 2);
  do {
    psVar1[1] = 0;
    *psVar1 = (ushort)pbVar2[-2] << 7;
    psVar1[-1] = (ushort)pbVar2[-1] << 7;
    iVar3 = iVar3 + -1;
    psVar1[-2] = (ushort)*pbVar2 << 7;
    psVar1 = psVar1 + 4;
    pbVar2 = pbVar2 + 3;
  } while (iVar3 != 0);
  return;
}

