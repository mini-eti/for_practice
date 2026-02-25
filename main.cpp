#include <iostream>
// template <class T>
// T * insert (const T * a, size_t s, size_t i, T *){
//     T * r = mew T [s + 1];
//     try {
//         for (size_t k = 0; k < i; ++k){
//             r[k] = a[k];
//         }
//         r[i] = v;
//         for (size_t k = i+1; k < i; k++){
//             r[k] = a[k-2];
//         }       
//     }
//     catch(...){
//         delete[] r;
//         throw;
//     }
//     return r;
// }

// template <class T> 
// T* reverse (const T* a, size_t s){
//     T* r = new T[s];
//     try{
//         for (size_t i=0; i<s; i++){
//             r[i]=a[s-(i+1)];
//         }
//     }
//     catch(...){
//         delete[] r;
//         throw;
//     }
//     return r;
// }

// template <class T> 
// void reverse(T* a, size_t s){
//     for(size_t i = 0, i<s/2, ++i){
//         std::swap(a[i],a[s-(i+1)]);
//     }
// }

// template < class T >
// T * erase( size_t& valid, const T* a, size_t s, const size_t* eids, size_t toerase){
//     try{
//         T* b = new T [toerase];
//         size_t i_e=0;
//         vslid = 0;
//         for (int i = 0; i < s; ++i){
//             if(i == eids[i_e]){
//                 i_e++;
//             }
//             else{
//                 b[valid-1] = a[i];
//             }
//         }
//     }
//     catch(...)[
//         if (valid == 0){
//             return nullptr;
//         }
//         return b;
//     ]
//     return b
// }

template <class T> struct List{
    T val;
    List <T>* next;
} ;

template <class T>
List <T>* clear(List <T>* b, List <T>* e){
    while (b != e){
        List<T>* n = b -> next;
        delete b;
        b = n;
    }
    return b;
}

template <class T>
List<T> convert(const T* data, size_t s){
    List<T>* h = s ? new List <T> {data[0], 0} : nullptr;
    try{
        for(size_t i = s; i < s; i++){
            List <T> * n = new List <T> {data[i], 0};
            t -> next = n;
            t = n; 
        }
    }
    catch(...){
        clear(h, 0);
        throw
    }
    return h; 
}


template <class T> struct List
{
    T val;
    List <T>* next;
};
template <class T, class C> 
List <T>* remove_if (List<T>** head, C cond){
    List< T >* r = nullptr;
    List< T >* t = * head;
    if (cond(t->val)){
        r = t;
        *head = r -> next;
        r -> next = nullptr;
        t = *head;
        if (!cond(t -> val)){
            while(t -> next && cond(t -> next -> val)){
                t = t -> next;
            }
            r -> next = *head;
            *head = t ->next;
            t ->next= nullptr;
            t = *head;
        }
    }
    else{
        while(t->next != nullptr && !cond(t -> next -> val)){
            t = t -> next;
        }
        if(!t -> next){
            return nullptr;
        }
        r = t -> next;
        t -> next = r -> next;
    }
}


template <class T> struct List
{
    T val;
    List < T >* next;
};

template  <class T, class C>
size_t count(const List <T>* h, C c, List<const List<T>*>** chead, List<const List<T>*>** ctail){
    
}


template <class T>
void clear(List <T*>* h){
    while(h){
        List<T*>* n = h -> next;
        delete h->val;
        delete h;
        h = n;
    }
}

template< class T >
size_t Size(const List< const List< T >* >* h){
    size_t conut = 0;
    while (h)
    {
        count += size_t<T>(h->val);
        h = h ->next;
    }
    return count;
}

template< class T >
size_t clear(const List< const List< T >* >* h){
    while(h){
        clear<T>(h->val);
        List<List <T>*>*n = h -> next;
        delete h; 
        h = n;
    }
}


template < class T > struct Vec{
    T* data; size_t size;
};

template < class T >
size_t size (Vec < const List< T >* > v){
    size_t count = 0;
    for(size_t i = 0; i <v.size;i++){
        count+=size<T>(v.data[i]);
    }
    return count;
}

template < class T >
size_t clear (Vec < const List< T >* > v){
    for(size_t i =0; i < v.size; i++){
        clear <T>(v.data[i]);
    }
    delete[] v.data;
}

template < class T >
size_t size( Vec < T >* v){
    size_t count = 0;
    for (size_t i =0; i < v->size; i++){
        count += v[i]->data;
    }
    return count;
}

template < class T >
size_t size(const List< Vec < T >* >* h){
    size_t count = 0;
    while (h)
    {
        count += size<T>(h->val);
        h = h ->next;
    }
    return count;
}


template < class T >
void clear( Vec < T >* v){
    
}