
/* def+0xdc of weapon 7: +1 per frame held while energy >= def+0x58 (drains it), cap def+0xe4 (500);
   release -> scale = n/def+0xe4 */

undefined4
Weapon7_ChargeScale(int param_1,uint param_2,int param_3,uint *param_4,int *param_5,int param_6)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_6 + 0x30) = 0;
    DAT_005b1b70 = *(undefined4 *)(param_1 + 0xe4);
    Hud_SetChargeSound(1);
  }
  if (*(int *)(param_1 + 0x58) <= *param_5) {
    *(int *)(param_6 + 0x30) = *(int *)(param_6 + 0x30) + 1;
  }
  iVar1 = *(int *)(param_6 + 0x30);
  if ((iVar1 != 0) && (DAT_005b1b6c = iVar1, *(int *)(param_6 + 0x30) == *(int *)(param_1 + 0xe4)))
  {
    Hud_SetChargeSound(0);
    Snd_Play2D(0xf,0x11,0,0xff);
  }
  if ((param_2 <= *(uint *)(param_1 + 0xe4)) &&
     (*param_5 = *param_5 - *(int *)(param_1 + 0x58), *param_5 < 0)) {
    *param_5 = 0;
  }
  if ((param_3 == 0) && (*(uint *)(param_6 + 0x30) != 0)) {
    if (*(uint *)(param_1 + 0xe4) < *(uint *)(param_6 + 0x30)) {
      *(uint *)(param_6 + 0x30) = *(uint *)(param_1 + 0xe4);
    }
    *param_4 = (uint)(*(int *)(param_6 + 0x30) << 0x10) / *(uint *)(param_1 + 0xe4);
    DAT_005b1b6c = 0;
    Hud_SetChargeSound(0);
    return 1;
  }
  return 0;
}

