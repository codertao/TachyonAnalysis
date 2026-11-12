
/* sweep */

void Radar_DrawBlip(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
                   )

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x7a4) != 0) {
    uVar2 = Hud_ColorAt(param_4);
    *(undefined4 *)(*(int *)(param_1 + 0x7a4) + 4) = uVar2;
    *(undefined4 *)(param_1 + 0x7a8) = param_2;
    *(undefined4 *)(param_1 + 0x7ac) = param_3;
    lVar1 = (longlong)*(int *)(param_1 + 0x7b8) * (longlong)DAT_005a67e4;
    *(int *)(param_1 + 0x7a8) =
         *(int *)(param_1 + 0x7a8) -
         ((int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) >> 1);
    lVar1 = (longlong)*(int *)(param_1 + 0x7bc) * (longlong)DAT_005a67e4;
    iVar3 = *(int *)(param_1 + 0x7ac) -
            ((int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) >> 1);
    *(int *)(param_1 + 0x7ac) = iVar3;
    Hud_DrawSprite(*(undefined4 *)(param_1 + 0x7a4),*(undefined4 *)(param_1 + 0x7a8),iVar3,4,
                   0xffffffff,*(undefined4 *)(param_1 + 0x7b0),*(undefined4 *)(param_1 + 0x7b4),
                   *(undefined4 *)(param_1 + 0x7b8),*(undefined4 *)(param_1 + 0x7bc));
    if (param_5 != 0) {
      *(undefined4 *)(param_1 + 0x7d4) = param_2;
      *(undefined4 *)(param_1 + 0x7d8) = param_3;
      lVar1 = (longlong)*(int *)(param_1 + 0x7e4) * (longlong)DAT_005a67e4;
      *(int *)(param_1 + 0x7d4) =
           *(int *)(param_1 + 0x7d4) -
           ((int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) >> 1);
      lVar1 = (longlong)*(int *)(param_1 + 0x7e8) * (longlong)DAT_005a67e4;
      iVar3 = *(int *)(param_1 + 0x7d8) -
              ((int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) >> 1);
      *(int *)(param_1 + 0x7d8) = iVar3;
      Hud_DrawSprite(*(undefined4 *)(param_1 + 2000),*(undefined4 *)(param_1 + 0x7d4),iVar3,4,
                     0xffffffff,*(undefined4 *)(param_1 + 0x7dc),*(undefined4 *)(param_1 + 0x7e0),
                     *(undefined4 *)(param_1 + 0x7e4),*(undefined4 *)(param_1 + 0x7e8));
    }
  }
  return;
}

