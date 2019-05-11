# AutomataCFG
İçerikten Bağımsız Gramer (context free grammer, CFG) sorusu ve çözümü.

# CFG Tanımı
Temel olarak bir içerik bağımsız gramer dört özellik içermelidir. Bunlar sonlular (terminals), devamlılar (nonterminals), bağlantılar (relation) ve başlangıç sembolu (starting symbol) olarak sıralanabilir. Bir gramerin tanımı sırasında kullanılan bu kümeler aşağıdaki şekilde yazılabilir:
G = ( V , ∑ , R , S)

Bu gösterimdeki grammer (G) , V devamlıları, ∑ sonluları, R bağlantıları, S ise başlangıç sembolünü göstermektedir.

Örneğin

S -> aSb | ab

şeklinde tanımlanan bir dilde:

G= ( {S} , {a,b} , {S -> aSb | ab} , S )

gösterimi kullanılabilir.

# SORU

Verilen CFG’ye göre Toplam dil ağacını üreterek; dili oluşturan kelimelerin tamamını (tekrarlı kelimeleri 1 defa yazacak) listeleyen programı yazınız. (“|” karakteri ayraç olarak kullanılacaktır. “- - >” karakteri sağa ok işareti olarak kullanılacaktır. “,” karakteri satır ayracı olarak kullanılacaktır)

Örneğin Σ={a, b, X}
CFG; Sàaa|bX|aXX,	Xàab|b
İçin Üretilen Kelimeler şunlardır:
aa, bab, bb, aabab, aabb, abab, abb 
Tekrarlanan  kelimeler şunlardır: 
aabab, abab, aabb, abb 
