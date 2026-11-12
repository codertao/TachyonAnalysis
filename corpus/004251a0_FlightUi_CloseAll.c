
/* sweep */

void FlightUi_CloseAll(void)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  
  bVar2 = false;
  piVar3 = DAT_005b1de0;
  if (*DAT_005b1de0 != 0) {
    do {
      if (piVar3[1] != 0) {
        piVar3[1] = 0;
        bVar2 = true;
      }
      piVar1 = piVar3 + 4;
      piVar3 = piVar3 + 4;
    } while (*piVar1 != 0);
    if (bVar2) {
      Input_PopBindingSet(&PTR_DAT_0053e760);
      Input_PopBindingSet(&PTR_DAT_0053e780);
      Input_PopBindingSet(&PTR_DAT_0053e7e0);
      Input_PopBindingSet(&PTR_DAT_0053e820);
      Input_PopBindingSet(&PTR_DAT_0053e728);
      Input_PopBindingSet(&PTR_DAT_0053e860);
    }
  }
  return;
}

