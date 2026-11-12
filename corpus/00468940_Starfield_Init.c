
/* sweep: "Star buffer" */

void Starfield_Init(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  Mem_AllocZeroTagged(&DAT_0058975c,72000,4,s_Star_buffer_0054a6dc,param_1);
  iVar2 = 2000;
  iVar1 = DAT_0058975c;
  do {
    Starfield_GenStar(iVar1);
    iVar1 = iVar1 + 0x24;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

