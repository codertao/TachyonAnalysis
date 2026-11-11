
void FUN_00499220(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  vec3 local_c;
  
  *(undefined1 *)(param_1 + 0x324) = 1;
  *(undefined1 *)(param_1 + 0x326) = 0;
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    FUN_00499170(param_1,&local_c,param_2);
    uVar2 = distance_between((vec3 *)(param_1 + 0x34),&local_c);
    if ((uVar2 < 0xc350000) && (0x1770000 < uVar2)) {
      FUN_004014a0(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0x327) = 0;
    }
    if (uVar2 < 0x7d0000) {
      uVar1 = FlightModel_SolveThrottle
                        (*(int *)(param_1 + 0x8c) + 0x84,*(undefined4 *)(DAT_0058b064 + 0xd4),
                         param_1 + 0x10c,*(uint *)(*(int *)(param_1 + 0x8c) + 0x564) & 0x400,1);
      *(undefined2 *)(param_1 + 0x312) = uVar1;
    }
    else {
      *(undefined2 *)(param_1 + 0x312) = 0x400;
    }
    Vec_DirAngles((vec3 *)(param_1 + 0x34),&local_c,param_1 + 0xdc);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0x54);
  }
  return;
}

