
/* +0x70: draw shield mesh at 2x model radius with per-draw anim counter */

void ShieldFx_Render(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = DAT_00668fd8;
  uVar2 = *(int *)(param_1 + 0x90) + 1;
  *(uint *)(param_1 + 0x90) = uVar2;
  *(short *)(param_1 + 0x30) = (short)(uVar2 >> 3);
  FUN_004b1890(uVar2);
  FUN_00420e10(param_1,1);
  FUN_004b1890(uVar1);
  return;
}

