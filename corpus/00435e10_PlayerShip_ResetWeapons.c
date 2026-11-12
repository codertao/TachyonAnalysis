
/* sweep */

void PlayerShip_ResetWeapons(int param_1,int param_2)

{
  short *psVar1;
  undefined4 *puVar2;
  int iVar3;
  
  psVar1 = (short *)(param_2 + 0x30);
  clr_bytes(psVar1,0x20);
  puVar2 = (undefined4 *)(param_1 + 0x164);
  iVar3 = 8;
  do {
    if ((short *)*puVar2 == (short *)0x0) {
      *psVar1 = 0;
    }
    else {
      *psVar1 = *(short *)*puVar2 + 1;
      psVar1[1] = *(short *)(puVar2 + 1);
    }
    puVar2 = puVar2 + 3;
    psVar1 = psVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

