
/* sweep: TRIGGER DEBUG */

void TrigDebug_Draw(void)

{
  SectorRec *pSVar1;
  
  Gfx_Lock(1);
  Ui_DrawBox(DAT_005b276c,0x17c,0x14,0xdc,0x140,0x80,DAT_005b2770,s_TRIGGER_DEBUG_00559cfc,0xffff00,
             80000,2);
  pSVar1 = g_SrvCurShip->quadrant->sector;
  TrigDebug_DrawLine(pSVar1->spx,0x184,0x2c,s_BASE_QUADRANT_00559cec);
  TrigDebug_DrawLine(*(undefined4 *)&pSVar1->field_0x8,0x1f2,0x2c,s_SUB_QUADRANT_00559cdc);
  return;
}

