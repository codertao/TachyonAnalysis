
/* sweep */

void Slots_EvaluateLine(int param_1)

{
  int iVar1;
  
  iVar1 = Slots_CheckLine(*(undefined4 *)**(undefined4 **)(param_1 + 4),
                          *(undefined4 *)**(undefined4 **)(param_1 + 8),
                          *(undefined4 *)**(undefined4 **)(param_1 + 0xc));
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 != 0) {
    Slots_ShowWinLine();
    return;
  }
  Slots_ShowLoseLine(param_1);
  return;
}

