
/* short-life guided-missile think (DCB +0x68, installed by 0x40a460): advance + proximity detonate
    */

void Dcb_Think_Missile(int param_1)

{
  int iVar1;
  
  Dcb_SetRangeFlags((undefined4 *)(param_1 + 0x15c),*(int *)(param_1 + 0x8c) + 0xc4,param_1);
  iVar1 = *(int *)(param_1 + 0xe8);
  if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0xf8) & 8) != 0)) && (*(short *)(iVar1 + 0xfc) != 0)) {
    Turret_Think(param_1);
    *(undefined4 *)(param_1 + 0x15c) = 40000;
  }
  return;
}

