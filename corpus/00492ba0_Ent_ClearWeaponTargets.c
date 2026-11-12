
/* sweep: guess */

void Ent_ClearWeaponTargets(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    if ((((*(short *)(iVar2 + 0x76) == 3) && (*(int *)(iVar2 + 0xdc) != 0)) &&
        (*(int *)(*(int *)(iVar2 + 0xdc) + 4) == 8)) && (*(int *)(iVar2 + 0xf4) == param_1)) {
      Quad_Unlink(iVar2);
    }
  }
  return;
}

