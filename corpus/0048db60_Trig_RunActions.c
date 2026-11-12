
/* run trigger actions {cat,arg,code,arg2} via g_TrigActionTable[cat][code] = {fn, extra} */

void Trig_RunActions(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  undefined1 local_40 [64];
  
  if (DAT_005a6730 != 0) {
    str_sprintf(local_40,s_TRIGGER___d__OCCURED_00559cb8,g_TrigCurrentIndex);
    SrvSend_TextSimple(local_40,0);
  }
  piVar2 = *(int **)(param_1 + 0x10);
  uVar3 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      if (-1 < *piVar2) {
        pcVar1 = *(code **)((&g_TrigActionTable)[*piVar2] + piVar2[2] * 8);
        if (pcVar1 != (code *)0x0) {
          (*pcVar1)(piVar2[1],piVar2[3],
                    *(undefined4 *)((int)((&g_TrigActionTable)[*piVar2] + piVar2[2] * 8) + 4),
                    param_2);
        }
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 4;
    } while (uVar3 < *(uint *)(param_1 + 4));
  }
  return;
}

