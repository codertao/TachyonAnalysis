
/* 0x4C-byte PLAYERDATA (client-authoritative pos/orient/vel, camera pos, target, throttle) */

undefined4 * Tach_WritePlayerData(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = GLBL_SOME_CONTEXT;
  *(undefined1 *)((int)param_1 + 0x4b) = 0;
  if (GLBL_SOME_CONTEXT != 0) {
    *(undefined1 *)((int)param_1 + 0x4b) = 1;
    *param_1 = *(undefined4 *)(iVar1 + 0x34);
    param_1[1] = *(undefined4 *)(iVar1 + 0x38);
    param_1[2] = *(undefined4 *)(iVar1 + 0x3c);
    *(char *)(param_1 + 0x12) = (char)(*(int *)(iVar1 + 0x4c) >> 0x11);
    *(char *)((int)param_1 + 0x49) = (char)(*(int *)(iVar1 + 0x50) >> 0x11);
    *(char *)((int)param_1 + 0x4a) = (char)(*(int *)(iVar1 + 0x54) >> 0x11);
    if (*(int *)(iVar1 + 0x90) == 0) {
      param_1[7] = 0;
    }
    else {
      FUN_00417e70(*(int *)(iVar1 + 0x90),param_1);
    }
    param_1[0xf] = *(undefined4 *)(iVar1 + 0xa0);
    param_1[0x10] = *(undefined4 *)(iVar1 + 0xa4);
    param_1[0x11] = *(undefined4 *)(iVar1 + 0xa8);
  }
  if (DAT_005b39ec == 0) {
    param_1[3] = DAT_005b9600;
    param_1[4] = DAT_005b9604;
    param_1[5] = DAT_005b9608;
  }
  else {
    param_1[3] = DAT_005b39d4;
    param_1[4] = DAT_005b39d8;
    param_1[5] = DAT_005b39dc;
  }
  param_1[9] = DAT_005b1ecc;
  if (DAT_005b1ee8 == 0) {
    param_1[10] = DAT_005b1ee0;
  }
  else {
    param_1[10] = 0xffffffff;
  }
  param_1[6] = DAT_005b3304;
  param_1[0xb] = g_PlayerPower.shieldFrontRate;
  param_1[0xd] = DAT_005b8f5c;
  param_1[0xe] = DAT_005b8f60;
  DAT_005b8f5c = 0;
  DAT_005b8f60 = 0;
  return param_1 + 0x13;
}

