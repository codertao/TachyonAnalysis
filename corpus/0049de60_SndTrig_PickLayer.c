
/* sweep: guess */

undefined8 __fastcall
SndTrig_PickLayer(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 uint param_6)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_3 <= param_4) &&
     (uVar1 = CONCAT44(param_3 >> 0x10,param_3 << 0x10) / (longlong)param_4,
     (uVar1 & 0xffff0000) == 0)) {
    iVar3 = *(int *)(&DAT_0055da1c + ((uint)uVar1 >> 8) * 4);
  }
  uVar2 = (uint)(param_5 * iVar3) >> 8;
  if ((int)param_6 <= (int)uVar2) {
    uVar2 = param_6;
  }
  return CONCAT44(param_2,uVar2);
}

