
/* sweep */

void ObjDisplay_Draw(void)

{
  int iVar1;
  
  if ((g_FlightStateFlags & 4) == 0) {
    if ((GLBL_spacesav[0x33] != 0) && (*(code **)(g_ActiveRules + 0x98) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00451129. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(g_ActiveRules + 0x98))();
      return;
    }
  }
  else {
    if (GLBL_spacesav[0x33] == 0) {
      ObjDisplay_SetupLayout();
      ObjDisplay_DrawCompleted();
      return;
    }
    if (DAT_005b39ec != 0) {
      return;
    }
    if (GLBL_spacesav[0x33] == 1) {
      if (DAT_0058f488 != 0) goto LAB_0045117b;
      if (DAT_005b9044 == 0) {
        GLBL_spacesav[0x33] = 2;
        goto LAB_0045117b;
      }
      ObjDisplay_DrawFooter();
      ObjDisplay_DrawNav();
    }
    if ((GLBL_spacesav[0x33] == 2) || (DAT_0058f488 != 0)) {
LAB_0045117b:
      ObjDisplay_DrawTitle();
      if (DAT_0058f48c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00451189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_0058f48c)();
        return;
      }
      if ((DAT_0058f488 != 0) && (iVar1 = ObjDisplay_IsActive(), iVar1 == 0)) {
        if (DAT_005b3248 != 0) {
          ObjDisplay_DrawOrders();
        }
        ObjDisplay_DrawNone();
        return;
      }
      if (DAT_005b3248 == 0) {
        iVar1 = ObjDisplay_IsActive();
        if (iVar1 == 0) {
          ObjDisplay_DrawBlank();
        }
      }
      else {
        ObjDisplay_DrawOrders();
      }
      ObjDisplay_DrawCampaign();
      return;
    }
  }
  return;
}

