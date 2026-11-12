
/* sweep */

void CapShip_SetTeam(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  Ent_SetTeam(param_1,param_2);
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xe0)) {
    *(char *)(iVar1 + 0xc2) = (char)param_2;
    if (*(short *)(iVar1 + 0x76) == 0xf) {
      *(undefined4 *)(iVar1 + 0x90) = 0;
    }
  }
  return;
}

