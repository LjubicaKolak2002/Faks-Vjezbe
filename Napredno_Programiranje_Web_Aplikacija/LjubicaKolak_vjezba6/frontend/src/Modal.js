import React, { useEffect, useRef } from "react";
import { createPortal } from "react-dom";

const modalRoot = document.getElementById("modal");

const Modal = ({ children }) => {
  const elRef = useRef(null);
  if (!elRef.current) {
    elRef.current = document.createElement("div");
  }

  useEffect(() => {
    if (modalRoot) {
      modalRoot.appendChild(elRef.current);
      return () => modalRoot.removeChild(elRef.current);
    }
  }, [modalRoot]);

  return createPortal(<div>{children}</div>, elRef.current);
};

export default Modal;
