#include <iostream>
#include <bits/stdc++.h>
#include <map>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef long long ull;
 
#define MAX 100000+10
int main() {FIN
    ull n,m;
    cin >> n >> m;
    ull el, es;
    cin >> es >> el;
    ull vel;
    cin >> vel;
    vector <ull> es_pos(es, 0);
    for(ull i=0; i<es; ++i){
        cin >> es_pos[i];
    }
    vector <ull> el_pos(el, 0);
    for(ull i=0; i<el; ++i){
        cin >> el_pos[i];
    }
    
    ull q;
    cin >> q;
    sort(el_pos.begin(), el_pos.end());
    sort(es_pos.begin(), es_pos.end());
    while(q--){
        ull x1, x2, y1, y2;
        cin >> y1 >> x1 >> y2 >> x2;
        vector<ull> elCerca(2);
        vector<ull> esCerca(2);
        if (el > 0){
            auto elIzq = lower_bound(el_pos.begin(), el_pos.end(),x1);
            if (elIzq != el_pos.begin()){
                elCerca[0] = *(--elIzq);
            }
            else{
                elCerca[0] = *elIzq;
            }
            auto elDer = upper_bound(el_pos.begin(), el_pos.end(), x1);
            if (elDer != el_pos.end()){
                elCerca[1] = *elDer;
            }else{
                elCerca[1] = -1;
            }
        }
        else{
            elCerca[0] = -1;
            elCerca[1] = -1;
        }
     
        if (es > 0){
            auto esIzq = lower_bound(es_pos.begin(), es_pos.end(),x1);
            if (esIzq != es_pos.begin()){
                esCerca[0] = *(--esIzq);
            }else{
                esCerca[0] = *(esIzq);
            }
            auto esDer = upper_bound(es_pos.begin(), es_pos.end(), x1);
            if (esDer != es_pos.end()){
                esCerca[1] = *esDer;
            }else{
                esCerca[1] = -1;
            }
        }
        else{
            esCerca[0] = -1;
            esCerca[1] = -1;
        }
        ull dis = 1e12+11;
        if (y1 == y2){
            dis = abs(x2-x1);
        }
        else{
            for (ull i=0; i<2; ++i){
                if(esCerca[i]!=-1){
                    ull disEs;
                    disEs = abs((y2-y1))+abs((x2-esCerca[i]))+abs((esCerca[i]-x1));
                    dis = min(disEs, dis);
                }
            }
    
            for (ull i=0; i<2; ++i){
                if(elCerca[i]!=-1){
                    ull pis=0;
                    ull resto = abs((y2-y1))%vel;
                    if (resto != 0){
                        pis=1;
                    }
                    ull disEl = abs((x2-elCerca[i]))+abs((elCerca[i]-x1))+(abs((y2-y1))/vel)+pis;
                    dis = min(dis, disEl);
                }
            }
        }
        
        cout << dis << '\n';
 
    }
    return 0;
}