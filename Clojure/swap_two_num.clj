(defn swap [a b]
  [b a])

(def a 1)
(def b 2)
(let [[a b] (swap a b)]
  (println a b))