
/* sweep: guess */

bool Wingman_InOtherQuadrant(void)

{
  int iVar1;
  
  iVar1 = Sector_FindQuadrant(DAT_005a5e20);
  return *(int *)(g_Wingman + 100) != iVar1;
}

