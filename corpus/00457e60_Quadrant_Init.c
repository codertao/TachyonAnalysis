
/* clear 0xbc, FLIGHTGROUP_ARRAY, link SectorRec<->Quadrant */

void __cdecl Quadrant_Init(Quadrant *q,SectorRec *rec,int regionId,int sectorId)

{
  void *pvVar1;
  
  clr_bytes(q,0xbc);
  FUN_0048e3d0(&q->flightGroups,0xa00,4,s_FLIGHTGROUP_ARRAY_00548d6c,0xbbbb);
  q->sector = rec;
  pvVar1 = (void *)FUN_0041f640();
  q->handle5c = pvVar1;
  q->sectorId = sectorId;
  rec->sectorId = sectorId;
  rec->regionId = regionId;
  rec->quadrant = q;
  FUN_00450810(q);
  FUN_00457e30(q);
  return;
}

