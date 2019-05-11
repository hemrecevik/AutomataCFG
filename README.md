# AutomataCFG
İçerikten Bağımsız Gramer (context free grammer, CFG) sorusu ve çözümü.

# SORU

Verilen CFG’ye göre Toplam dil ağacını üreterek; dili oluşturan kelimelerin tamamını (tekrarlı kelimeleri 1 defa yazacak) listeleyen programı yazınız. (“|” karakteri ayraç olarak kullanılacaktır. “- - >” karakteri sağa ok işareti olarak kullanılacaktır. “,” karakteri satır ayracı olarak kullanılacaktır)

Örneğin Σ={a, b, X}
CFG; Sàaa|bX|aXX,	Xàab|b
İçin Üretilen Kelimeler şunlardır:
aa, bab, bb, aabab, aabb, abab, abb 
Tekrarlanan  kelimeler şunlardır: 
aabab, abab, aabb, abb 
