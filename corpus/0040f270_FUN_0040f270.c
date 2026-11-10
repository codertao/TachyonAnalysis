
void FUN_0040f270(int param_1)

{
  int *piVar1;
  char *pcVar2;
  
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffd;
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_00452180(1);
    FUN_004b19a0((uint *)(param_1 + 0x18));
    (**(code **)(param_1 + 0x70))(param_1);
  }
  FUN_004babf0();
  if ((*(byte *)(DAT_005b95e0 + 0xc) & 0x20) == 0) {
    FUN_0042c6c0();
  }
  FUN_0040ecd0();
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(DAT_005b1f0c + 0x290);
  *(undefined4 *)(param_1 + 0x28) = DAT_00666b00;
  switch(*(undefined4 *)(DAT_005b95e0 + 0x2c)) {
  case 7:
    pcVar2 = s_CAMERA_LEFT_00533dd8;
    break;
  case 8:
    pcVar2 = s_CAMERA_RIGHT_00533dc8;
    break;
  case 9:
    pcVar2 = s_CAMERA_UP_00533dac;
    break;
  case 10:
    pcVar2 = s_CAMERA_BACK_00533da0;
    break;
  default:
    goto switchD_0040f2e4_default;
  }
  piVar1 = (int *)Rtxt_Lookup(DAT_005a6140,s_CAMERA_LABELS_00533db8,pcVar2);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    FUN_0048e970(*piVar1,DAT_005b1870,0x140,0x1db,0xff,0xffff,0x10000,0x26);
  }
switchD_0040f2e4_default:
  return;
}

